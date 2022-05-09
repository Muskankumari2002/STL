#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> li={1,2,3,4};
    list<int>::iterator itr= li.begin();
    li.insert(itr,5);
    for(itr=li.begin();itr != li.end();++itr)
    {
        cout<<*itr;

    }
    return 0;

}
//iterator points to the 1st element of the list,and 5 is inserted using insert() functrion
