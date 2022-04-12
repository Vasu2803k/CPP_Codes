#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long
// brute , not for corner cases!

void solve()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());
    int max_count=0;int curr_count=1;
    for(int i=0;i<n-1;i++)
    {
        if(vec[i]!=vec[i+1])
        {
            curr_count++;
        }
        max_count=max(max_count, curr_count);   
    }
    cout<<max_count<<endl;

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