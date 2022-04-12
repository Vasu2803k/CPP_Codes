#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
//#define int long long int
void solve()
{
    int q;
    cin>>q;
    multiset<int> ms;
    //multiset<int>::iterator it;

    while(q--)
    {
        string s;
        cin>>s;
        if(s=="add")
        {
            int x;
            cin>>x;
            ms.insert(x);
        }
        else if(s=="erase")
        {
            int x;
            cin>>x;
            if(ms.count(x)!=0)
            {
                ms.erase(ms.find(x));
            }
        }
        else if(s=="eraseall")
        {
            int x;
            cin>>x;
            if(ms.count(x)!=0)
            {
                ms.erase(x);
            }

        }
        else if(s=="find")
        {
            int x;
            cin>>x;
            if(ms.find(x)!=ms.end())
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }


        }
        else if(s=="print")
        {
            for(auto x:ms)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
        else if(s=="empty")
        {
            ms.clear();
        }
        else if(s=="count")
        {
            int x;
            cin>>x;
            cout<<ms.count(x)<<endl;
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