#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
//#define int long long int
void solve()
{
    int q;
    cin>>q;
    map<string, int> mp;
    while(q--)
    {
        string s;
        cin>>s;
        if(s=="add")
        {
            string x; int y;
            cin>>x>>y;
            mp[x]=y;

        }
        else if(s=="erase")
        {
            string x;
            cin>>x;
            if(mp.count(x))
            {
                mp.erase(x);
            }

        }
        else if(s=="print")
        {
            string x;
            cin>>x;
            if(mp.count(x))
            {
                cout<<mp[x]<<endl;
            }
            else{
                cout<<"0"<<endl;
            }
        }
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
