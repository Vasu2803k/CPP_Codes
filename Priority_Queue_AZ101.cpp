#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
//#define int long long int
void solve()
{
    int q;
    cin>>q;
    priority_queue<int> pq;
    while(q--)
    {
        string s;
        cin>>s;
        if(s=="add")
        {
            int x;
            cin>>x;
            pq.push(x);
        }
        else if(s=="remove")
        {
            if(!pq.empty())
            {
                pq.pop();
            }
        }
        else if(s=="print")
        {
            if(!pq.empty())
            {
                cout<<pq.top()<<endl;
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