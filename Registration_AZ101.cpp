#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
//#define int long long int
void solve()
{
    int n;
    cin>>n;
    map<string,int> mp;
   
    while(n--)
    {
        string s;
        cin>>s;
        
        if(!mp.count(s))
        {
            
            cout<<"OK"<<endl;
            
            
        }
        else
        {
            
            cout<<s<<mp[s]<<endl;
            
        }
        mp[s]++;
        
    }
}
signed main()
{
    int _t;cin>>_t;
    while(_t--)
        {
            solve();
        }
    return 0;
}