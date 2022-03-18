#include <stdio.h>
#include "set.h"

using namespace std;

int main(int argc, char **argv)
{
    //showing constructors and insert
	set s1, s2, s4, s_u, s_i, s_c;
    
    //assigning values
    for(int i = 0; i < 10; i++)
    {
        s1.insert(i);
    }
    
    //assigning values
    for(int i = 6; i < 15; i++)
    {
        s2.insert(i);
    }
    

    cout << "Values of s1: " << s1 << endl;
    cout << "Values of s2: " << s2 << endl;
    
    set s3(s1);
    cout << "s3 after copy constructor of s1: " << s3 << endl;
    
    s3.deleteItem(5);
    cout << "s3 after deleting 5" << s3 << endl;
    
    s3.insert(6);
    cout << "s3 after inserting 6: " << s3 << endl;
    cout << "Count of 6's in s3: " << s3.count(6) << endl;
    cout << "Size of s3: " << s3.size() << endl;
    cout << "s3 containing 20: " << s3.contains(20) << endl;
    cout << "s3 containing 6: " << s3.contains(6) << endl;
    
    s4 = s3;
    cout << "tesing = overload, setting s4 equal to s3: " << s4 << endl;
    
    s_u = unionSet(s1, s3);
    cout << "Union of s1 and s3: " << s_u << endl;
    s_i = intersection(s1,s2);
    cout << "Intersection of s1 and s2: " << s_i << endl;
    s_c= complement(s1,s2);
    cout << "Compliment of s1 and s2: " << s_c << endl;
    


}