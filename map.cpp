#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string> m;
    m[1] = "muskan";
    m[2] = " abhi";
    m.insert({7, " morning"});
    m[3]=" helloi";
    map<int,string> :: iterator itr;
    for(itr=m.begin(); itr!= m.end();++itr)

{
    cout<<(*itr).first<<" "<<(*itr).second<<" "<<endl;
}
return 0;
}
