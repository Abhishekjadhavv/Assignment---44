// Using inbuilt function and insert an element to the set container.
#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main()
{
    set<int> s;
    s.insert(10);
    s.insert(23);
    s.insert(54);
    s.insert(67);
    s.insert(28);

    set<int>::iterator it = s.begin();

    while (it != s.end())
    {
        cout << *it << " ";
        it++;
    }

    return 0;
}