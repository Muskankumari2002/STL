#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    vector<int> num {1,2,3,4,5};
    cout<<" initiaL vector: ";
    for(const int& i : num)
    {
        cout<<i<<" ";
    }
    num.push_back(6);
    num.push_back(7);
    cout<<"updated vector: ";
    for(const int& i: num)
    {
        cout<<i<<" ";
    }
    return 0;
}
