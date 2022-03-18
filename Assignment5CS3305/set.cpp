#include "set.h"
#include <cassert>
#include <iostream>

using namespace std;

set::set()
{
     CAPACITY = 30;
     used = 0;
     data = new value_type[CAPACITY];
}

set::~set()
{
    delete data;
    used = 0;
    CAPACITY = 0;
}

set::set(const set& source)
{
    *this = source;
}


void set::insert(const value_type& target)
{
  if(size()< CAPACITY && !contains(target)){
    data[used] = target;    
    used++;
  }
}


void set::deleteItem(const value_type& target)
{
  size_type location = find(target);
  for(int i = location; i <used;i++){
    size_type temp = data[location];
    data[i] = data[i+1];
    data[i+1]=temp;
  }
  used--;
  
}

set::size_type set::find(const value_type& target) const
{
     size_type location = 0;
     while (location < used && data[location] != target)
          location++;
     return location;

}

set::size_type set::count(const value_type& target) const
{
    size_type counter = 0;
    for(size_type i = 0; i < size(); i++)
    {
        if(data[i] == target)
            counter++;
    }
    return counter;
}

//friend functions
set unionSet(const set& s1, const set& s2)
{
     set result;
     for (set::size_type i = 0; i < s1.size(); i++)
          result.insert(s1.data[i]);
     for (set::size_type i = 0; i < s2.size(); i++)
          result.insert(s2.data[i]);

     return result;
}


set intersection(const set& s1, const set& s2)
{
     set result;

     for (set::size_type i = 0; i < s1.size(); i++)
     {
          if (s2.contains(s1.data[i]))
              result.insert(s1.data[i]);
     }
     
     return result;
}


set complement(const set& s1, const set& s2)
{
     set result;
     for (set::size_type i = 0; i < s2.size(); i++)
     {
       if (!(s1.contains(s2.data[i])))
        result.insert(s2.data[i]);
     }
     return result;
}

std::ostream& operator<< (std::ostream& output, const set& s)
{
     output << "[";
     
     for (set::size_type i = 0; i < s.size(); i++)
     {
          output << s.data[i] << "";
          if(!(i > s.size()-2))
            output << ", ";              
     }
     
     output << "]";

     return output;
}


set& set::operator= (const set& source)
{
    CAPACITY = 30;
    used = source.used;
    data = new value_type[CAPACITY];
    
     for (set::size_type i = 0; i < source.size(); i++)
          data[i] = source.data[i];
          
    return *this;
}