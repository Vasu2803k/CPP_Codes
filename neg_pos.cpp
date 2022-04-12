#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define int long long int

// o(n)-t.c, o(n)-s.c
/*void solve()
{
    vector<int> arr={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n=arr.size();
    vector<int> arr2;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            arr2.push_back(arr[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            arr2.push_back(arr[i]);
        }
    }
    for(auto x:arr2)
    {
        cout<<x<<" ";
    }
}*/
// Applying dutch national flag alogorthm.
void solve()
{
    vector<int> arr={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n=arr.size();
    int low=0,high=8;
    while(low<=high)
    {
        if(arr[low]<0)
        {
            low++;
        }
        else{
            int temp=arr[low];
            arr[low]=arr[high];
            arr[high]=temp;
            high--;
        }
    }
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
}
signed main(){
    IOS
    int _t; cin>>_t;
    while(_t--)
        {
            solve();
        }
    return 0;
}