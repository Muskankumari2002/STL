#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    vector <int> num {1,2,3,4,5};
    for(const int& i : num)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    num.at(0)= 10;
    cout<<" updated vector"<<endl;
    for(const int& i: num)
    {
        cout<<i<<" ";
    }
    return 0;
}
