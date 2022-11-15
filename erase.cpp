// Erase an element from a set.
#include <iostream>
#include <set>
#include <iterator>

using namespace std;
int main()
{
    set<int> s;
    s.insert(12);
    s.insert(30);
    s.insert(67);
    s.insert(21);
    s.insert(12);

    set<int>::iterator it = s.begin();
    while (it != s.end())
    {
        cout << *it << " ";
        it++;
    }
    cout<<endl;
    s.erase(12);
     
    it = s.begin(); 
    while (it != s.end())
    {
        cout << *it << " ";
        it++;
    }

    return 0;
}