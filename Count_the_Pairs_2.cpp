

#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define endl '\n'
#define int long long int

signed main()
{
    IOS
    int t;cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> vec(n);

        int i=0;
        while(i<n)
        {
            cin>>vec[i++];
        }

        sort(vec.begin(),vec.end());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int j=upper_bound(vec.begin(),vec.end(),x-vec[i])-vec.begin();
            if(vec[i]<=x-vec[i])
            {
                j--;
            }
            ans+=j;
        }
        cout<<ans<<endl;

        //cout<<j<<endl;
    }

    return 0;
}

