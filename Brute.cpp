#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
//#define int long long
void brute(vector<int> arr, int n, int k)
{
    multiset<int> mt(arr.begin(),arr.end());
    multiset<int>::iterator it;
    for(int i=0;i<k;i++)
    {
        it=mt.end();
        cout<<*(--it)<<" ";
        mt.erase(it);
    }
    

}
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int > arr(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.begin()+n);
    for(int i=0;i<k;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    brute(arr,n,k);
    
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