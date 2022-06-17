#include<iostream>
#include<deque>
using namespace std;
void show(deque<int> d)
{
    deque<int>::iterator it;
    for(it= d.begin(); it != d.end();++it)
    {
        cout<<*it<<" ";
    }
}
int main()
{
    deque<int> d;
    d.push_back(2);
    d.push_back(6);
    d.push_back(20);
    cout<<"Print the elements in deque: "<<endl;
    show(d);
    cout<<endl;
    cout<<"size of deque "<<d.size()<<endl;
    cout<<"element at 2nd index: "<<d.at(2)<<endl;
    cout<<"delete the last element and print the deque: ";
    d.pop_back();
    show(d);
    cout<<endl;
    d.pop_front();
    cout<<"Delete from front ";
    show(d);
    
}
