#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    vector<int> num{1,2,3,4,5};//vector declare
    vector<int>::iterator iter;//iterator declare
    iter = num.begin();//initize the iterators qwith first element
    cout<<"num[0] = "<<*iter<<endl;//print the vector element
    iter = num.begin() + 2;//iterators point to third element
    cout<<"num[2]"<<*iter<<endl;
    iter = num.end() - 1;//iterators point the last element
    cout<<"num[4]"<<*iter<<endl;
    return 0;
}
