#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long 
//-->brute force idea
void solve()
{
    int n;
    cin>>n;
    int a,b;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        arr[i].first=a;
        arr[i].second=b;
        
    }
    sort(arr.begin(),arr.end());
    int count_max=0;
    for(int i=0;i<n-1;i++)
    {
        int curr_count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j].first<arr[i].second)
            {
                curr_count++; // this will not solve the corner cases.
            // (1,9)(3,4)(5,10)(7,11)-- max will be 3 
            // cannot get by above method, so we should add extra cases 
            // try 0(n^2)

             }
             
        }
        count_max=max(curr_count, count_max);
    }
    cout<<count_max<<endl;


}

/*void solve()
{
    int n;
    cin>>n;
    int a, b;
    vector<pair<int,int>> vec;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        vec.push_back({a,1}); // assume arrival as 1
        vec.push_back({b,-1}); // leaving as -1
        // a person should arrive before others leave
        // after sorting we can get the exact idea like if a 2nd person 
        // arrives before first person then we can count , but if 1st leaves before 
        // 2nd arrival then we should not count

    }
    sort(vec.begin(), vec.end());
    int max_count=0, curr_count=0;
    for(auto i:vec)
    {
        curr_count+=i.second;
        max_count=max(curr_count,max_count);
    }
    cout<<max_count<<endl;

}
*/
signed main()
{
    int _t;cin>>_t;
    while(_t--)
        {
            solve();
        }
    return 0;
}