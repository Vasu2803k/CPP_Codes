#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long int
void solve()
{
    int n,k;
    cin>>n>>k;
    priority_queue<int> pq;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        pq.push(x);
    }
    int count=0;
    for(int i=0;i<k;i++)
    {
        int x=pq.top();
        count+=x;
        pq.pop();
        pq.push(x/2);
    }
    cout<<count<<endl;
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