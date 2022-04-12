
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define endl '\n'
#define int long long int
void solve()
{
    int q;
    cin>>q;
    set<int> st1,st2;
    // st2 is for storing the elements not present in st1


    while(q--)
    {
        int num, x;

        cin>>num>>x;
        if(num==1)
        {
            st1.insert(x);
            // store not present elements in another set, maintain a chain of elements
            st2.erase(x); // erase if inserting in st1
            if(!st1.count(x+1))
            {
                st2.insert(x+1);
            }
        }
        else if(num==2)
        {

            if(!st1.count(x))
            {
                cout<<x<<endl;
            }
            else
            {
                //set<int>::iterator it;
                //it=lower_bound(st2.begin(),st2.end(),x);
                //cout<<*it<<endl;
                cout<<*st2.lower_bound(x)<<endl;
            }


        }
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
