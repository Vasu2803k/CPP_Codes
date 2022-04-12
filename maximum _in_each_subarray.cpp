#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define endl '\n'
//#define int long long int
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    multiset<int> ms;
    int ans=0;
    for(int i=0;i<n+1;i++)
    {
        multiset<int>::iterator it;
        if(i<k)
        {
            ms.insert(vec[i]);
        }
        else if(i>=k)
        {
            it=ms.end();
            it--;
            ans=*it;
            cout<<ans<<" ";
            ms.erase(ms.find(vec[i-k]));
            ms.insert(vec[i]);

        }
    }
    cout<<endl;
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
