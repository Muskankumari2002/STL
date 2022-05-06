#include<bits/stdc++.h>
#include<iterator>
#include<set>
using namespace std;
int main()
    {
set<int, greater<int>> s1;//set
s1.insert(10);//insert element
s1.insert(20);
s1.insert(30);
s1.insert(40);
s1.insert(50);
set<int, greater<int>>::iterator itr;//printing set s1
for(itr =s1.begin(); itr!= s1.end();itr++)
{
    cout<<*itr<<" ";
}
cout<<endl;
set<int> s2(s1.begin(), s1.end());//assigning elements from s1 to s2
for(itr =s2.begin(); itr !=s2.end();itr++)
{
    cout<<*itr<<" ";
}
cout<<endl;
s2.erase(s2.begin(),s2.find(30));
for(itr= s2.begin(); itr != s2.end();itr++)
{
    cout<<*itr<<" ";
}
return 0;
    }
