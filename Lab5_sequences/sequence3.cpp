//jade ainsworth
//data structures section 4
//fall 2021
//instructor kretlow

#include "sequence3.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <cstdlib>//standard c++ library
#include <cassert>


using namespace std;
namespace main_savitch_5
{
  sequence::sequence()
{
	head_ptr = NULL;
	tail_ptr = NULL;
	cursor = NULL;
	precursor = NULL;
	many_nodes = 0;
}

//copy constructor
sequence::sequence(const sequence& source)
{
	many_nodes = source.many_nodes;
	list_copy(source.head_ptr, head_ptr, tail_ptr);
	
	node* index_src;
	index_src = source.head_ptr;
	precursor = head_ptr;
	
	if (source.cursor == NULL)
	{
		if (source.precursor == NULL)
		{
			cursor = NULL;
			precursor = NULL;
		}
		else
		{
			precursor = tail_ptr;
			cursor = NULL;
		}
	}
	else
	{
		if (source.precursor == NULL)
		{
			cursor = head_ptr;
			precursor = NULL;
		}
		else
		{
			while (index_src != source.precursor)
			{
				index_src = index_src->link();
				precursor = precursor->link();
			}
			cursor = precursor->link();
		}
	}
}
        
sequence::~sequence( )
{
	list_clear(head_ptr);
}


// MODIFICATION MEMBER FUNCTIONS
void sequence::start( )
{
	cursor = head_ptr;
	precursor = NULL;
}

void sequence::advance( )
{
	if (is_item())
	{
		precursor = cursor;
		cursor = cursor->link();
	}
	else
	{
		start();
	}
	
}

void sequence::insert(const sequence::value_type& entry)
{
	if (is_item())
	{
		//cursor has an item
		if (precursor != NULL)
		{
			//cursor is somewhere in the middle
			list_insert(precursor, entry);
			cursor = precursor->link();
		}
		else
		{
			//cursor is at the head
			list_head_insert(head_ptr, entry);
			precursor = NULL;
			cursor = head_ptr;
		}
	}
	else
	{
		//cursor does not have an item
		if (many_nodes == 0)
		{
			//list is empty
			list_head_insert(head_ptr, entry);
			precursor = NULL;
			cursor = head_ptr;
			tail_ptr = head_ptr;
		}
		else
		{
			//cursor has run off the list
			list_head_insert(head_ptr, entry);
			precursor = NULL;
			cursor = head_ptr;
		}
	}
	
	many_nodes++;
}

void sequence::attach(const sequence::value_type& entry)
{
	if (is_item())
	{
		//cursor has an item
		if (cursor->link() == NULL)
		{
			//cursor is at the tail
			list_insert(cursor, entry);
			precursor = cursor;
			cursor = cursor->link();
			tail_ptr = cursor;
		}
		else
		{
			//cursor is somewhere in the middle
			list_insert(cursor, entry);
			precursor = cursor;
			cursor = cursor->link();
		}
	}
	else
	{
		if (many_nodes == 0)
		{
			//list is empty
			list_head_insert(head_ptr, entry);
			precursor = NULL;
			cursor = head_ptr;
			tail_ptr = head_ptr;
		}
		else
		{
			//cursor has run off the list
			precursor = tail_ptr;
			list_insert(tail_ptr, entry);
			tail_ptr = tail_ptr->link();
			cursor = tail_ptr;
		}
	}
	
	many_nodes++;
}

void sequence::operator =(const sequence& source)
{
	many_nodes = source.many_nodes;
	list_copy(source.head_ptr, head_ptr, tail_ptr);
	
	node* index_src;
	index_src = source.head_ptr;
	precursor = head_ptr;
	
	if (source.cursor == NULL)
	{
		if (source.precursor == NULL)
		{
			cursor = NULL;
			precursor = NULL;
		}
		else
		{
			precursor = tail_ptr;
			cursor = NULL;
		}
	}
	else
	{
		if (source.precursor == NULL)
		{
			cursor = head_ptr;
			precursor = NULL;
		}
		else
		{
			while (index_src != source.precursor)
			{
				index_src = index_src->link();
				precursor = precursor->link();
			}
			cursor = precursor->link();
		}
	}
}

void sequence::remove_current( )
{
	if (is_item())
	{
		many_nodes--;
		if (precursor == NULL)
		{
			list_head_remove(head_ptr);
			cursor = head_ptr;
		}
		else
		{
			cursor = cursor->link();
			list_remove(precursor);
		}
	}
}


// CONSTANT MEMBER FUNCTIONS
sequence::value_type sequence::current( ) const
{
	return cursor->data();
}
}