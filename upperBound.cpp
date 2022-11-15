// how to find the upper bound of any desired element from the set.
#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(10);
    s.insert(5);
    s.insert(6);

    set<int>::iterator it = s.begin();

    cout << "Set elements" << endl;
    while (it != s.end())
    {
        cout << *it << " ";
        it++;
    }

    it = s.upper_bound(3);
    if (it != s.end())
    {
        cout << "\nThe upper bound of key 3 is ";
        cout << (*it) << endl;
    }
    else
        cout << "The element entered is larger than the "
                "greatest element in the set"<< endl;

    it = s.upper_bound(4);
    if (it != s.end())
    {
        cout << "\nThe upper bound of key 4 is ";
        cout << (*it) << endl;
    }
    else
        cout << "The element entered is larger than the "
                "greatest element in the set"<< endl;

    it = s.upper_bound(20);
    if (it != s.end())
    {
        cout << "\nThe upper bound of key 4 is ";
        cout << (*it) << endl;
    }
    else
        cout << "The element entered is larger than the "
                "greatest element in the set"<< endl;
    return 0;
}