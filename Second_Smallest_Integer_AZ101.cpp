#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define endl '\n'
//#define int long long int
void solve()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    set<int> se(vec.begin(),vec.end());
    set<int>::iterator it;
    it=se.begin();

    int smallest_1=*it;
    int smallest_2;
    se.erase(smallest_1);
    if(!se.empty())
    {
        it=se.begin();

        smallest_2=*it;
        cout<<smallest_2<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
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
