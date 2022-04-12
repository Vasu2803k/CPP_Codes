#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
//#define int long long int
void solve()
{
    int n,m;
    cin>>n>>m;
    multiset<int> ms1;
    vector<int> vec(m);

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ms1.insert(x);
    }
    for(int i=0;i<m;i++)
    {
        cin>>vec[i];
    }
    for(int j=0;j<m;j++)
    {
        if(ms1.count(vec[j])!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
            ms1.insert(vec[j]);
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