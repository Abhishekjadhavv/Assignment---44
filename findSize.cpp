// Find the total number of elements of the set container.
#include<iostream>
#include<set>

using namespace std;
int main(){
    set<int>s = {12,34,56};

    cout<<"Total number of element is : "<<s.size();
    return 0;
}