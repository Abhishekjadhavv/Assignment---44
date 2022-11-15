// Checks whether the set is empty or not.if it is empty insert 5 elements in the set
#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main()
{
    set<int> s;

    if (s.empty())
    {
        s.insert(1);
        s.insert(2);
        s.insert(3);
        s.insert(4);
        s.insert(5);
    }
    else
    {
        cout << "Set is not empty" << endl;
    }

    set<int>::iterator it = s.begin();

    while (it != s.end())
    {
        cout << *it << " ";
        it++;
    }
    return 0;
}
