#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    for(int i=1;i<=5;i++)
    {
        v.push_back(i);
    }
    cout<<"output of begin and end: ";
    for(auto i=v.begin(); i != v.end();++i)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"output for rbegin and rend: ";
    for(auto i=v.rbegin(); i != v.rend(); ++i)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
     cout<<"output for cbegin and cend: ";
    for(auto i=v.cbegin(); i != v.cend(); ++i)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
     cout<<"output for crbegin and crend: ";
    for(auto i=v.crbegin(); i != v.crend(); ++i)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"Size of vector : "<<v.size()<<endl;
    cout<<"print the element of the vector after deletion ";
    v.pop_back();
    for(auto i=v.begin(); i != v.end(); ++i)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"Size after deletition of vector: "<<v.size()<<endl;
    cout<<"capacity of vector "<<v.capacity()<<endl;
    cout<<"Add 8, 9, 3 times 10 in vector";
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    for(auto i=v.begin(); i != v.end(); ++i)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"Size of vector : "<<v.size()<<endl;
    cout<<"capacity of vector "<<v.capacity()<<endl;
    cout<<"front element "<<v.front()<<endl;
    cout<<"Element at 5th index: "<<v.at(5)<<endl;
    cout<<"Last element "<<v.back()<<endl;
    
     
    
    return 0;
}
