#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define endl '\n'
//#define int long long int
void solve()
{
    int q;cin>>q;
    set<int> se;
    while(q--)
    {

        string s;cin>>s;
        if(s=="add")
        {
            int x;
            cin>>x;
            se.insert(x);
        }
        else if(s=="erase")
        {
            int x;cin>>x;
            auto it=se.find(x);
            if(it!=se.end())
            {
                se.erase(it);
            }

        }
        else if(s=="find")
        {
            int x;cin>>x;
            if(se.find(x)!=se.end())
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(s=="print")
        {
            for(auto it:se)
            {
                cout<<it<<" ";
            }
            cout<<endl;

        }
        else
        {
            se.clear();
        }
    }
}
signed main()
{
    IOS
    int t;cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
