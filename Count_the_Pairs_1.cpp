
// o(n^2) solution
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
        vector<pair<int,int>> vec1;
        int i=0;
        while(i<n)
        {
            cin>>vec[i++];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j && vec[i]+vec[j]<=x)
                {
                    vec1.push_back(pair<int,int> (vec[i],vec[j]));
                }
            }
        }
        /*
        // selection sort
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(i!=j && vec[i]+vec[j]<=x)
                {
                    vec1.push_back(pair<int,int> (vec[i],vec[j]));
                }
            }
        }*/
        for(auto c:vec1)
        {
            cout<<"("<<c.first<<","<<c.second<<")"<<endl;
        }
        int ans=0;
        ans=vec1.size();
        cout<<ans<<endl;

    }

    return 0;
}
