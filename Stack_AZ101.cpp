#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define endl '\n'
#define int long long int
void solve()
{
    int q;
    cin>>q;
    stack<int> st;
    while(q--)
    {
        string s; int x;
        cin>>s;
        if(s=="add")
        {
           cin>>x;
            st.push(x);
        }
        else if(s=="print")
            if(!st.empty())
            {
                cout<<st.top()<<endl;

            }
            else
            {
                cout<<"0"<<endl;
            }
        else if(s=="remove")
            if(!st.empty())
            {
                st.pop();
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
