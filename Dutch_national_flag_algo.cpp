#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define int long long int

void solve()
{
    vector<int> arr={0,2, 1, 1,2,1,2,1,2 ,0};
    // a[0---low-1]-->0
    // a[high+1---n]-->2
    // 
    int low=0,mid=0,high=9;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            int temp=arr[mid];
            arr[mid]=arr[low];
            arr[low]=temp;
            low++,mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else if(arr[mid]==2)
        {
            int temp=arr[mid];
            arr[mid]=arr[high];
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