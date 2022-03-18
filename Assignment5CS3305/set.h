#include <cstdlib>
#include <iostream>

class set
{

public:

    typedef int value_type;
    typedef std::size_t size_type;
    size_type CAPACITY;
    value_type* data;
    

    set();
   ~set();
    set(const set& source);
    void insert(const value_type& target);
    void deleteItem(const value_type& target);
    size_type size() const{return used;}
    bool contains(const value_type& target) const{return find(target) < used;}
    size_type count(const value_type& target) const;


    friend set unionSet(const set& s1, const set& s2);
    friend set intersection(const set& s1, const set& s2);
    friend set complement(const set& s1, const set& s2);
    friend std::ostream& operator<< (std::ostream& output, const set& s);
    set& operator= (const set& source);

private:
     size_type find(const value_type& target) const;
     size_type used;
};