#include<bits/stdc++.h>
#include<vector>
#include <iterator>
using namespace std;
int main()
{
    vector<int> v = {2,3,6,7,8,9};
    for(int i=0; i<v.size();++i)
    {

    cout<<v[i]<<" "  ;  

    }
    for(auto it= v.begin();it != v.end();++it)
    {
        cout<<(*it)<<" ";
    }
    return 0;

}
