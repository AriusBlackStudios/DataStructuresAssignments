//jade ainsworth
//data structures section 4
//fall 2021
//instructor kretlow
#include "sequence.h"
#include <cstdlib>//standard c++ library
using namespace std;
namespace jade_assignment_3
{
    const sequence::size_type sequence::CAPACITY;

    sequence::sequence()
    {
        current_index = 0;
        used = 0;
    }
    sequence::value_type sequence::current()const
    { 

        return data[current_index];
    }
    void sequence::start()
    {
        current_index = 0;
    }

    void sequence::advance()
    {
        //current_index changes so that it returns the next item in the sequence
        current_index++;
    }

    bool sequence::is_item() const
    {
        if(current_index>=used)
        {
            return false;
        }

        else
        {
            return true;
        }
    }

    void sequence::insert(const value_type& entry)
    {
        if(used>0)
        {
             for(int i = used-1; i>=(int)current_index; --i)
            {
                data[i+1]=data[i];
            }
        }
        data[current_index] = entry;
        used++;
    }

    void sequence::attach(const value_type& entry)

    {
        if (used>0)
        {
            for(int i = used-1; i>(int)current_index; --i)
            {
                data[i+1]=data[i];
            }
        }
        data[current_index+1] = entry;
        used++;
        current_index++;
    }

    sequence::size_type sequence::size()const
    {
        return used;
    }


    void sequence::remove_current()
    {
        for(size_type i = current_index+1; i<used; i++)
        {
            data[i-1]=data[i];
        }
        used--;
        current_index--;
    }
}
