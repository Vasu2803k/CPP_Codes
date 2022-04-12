#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
//#define int long long int
void solve()
{
    int q;
    cin>>q;
    multimap<string, int> mm;
    multimap<string,int>::iterator it;
    while(q--)
    {
        string s;
        cin>>s;
        if(s=="add")
        {
            string x; int y; 
            cin>>x>>y;
            
            mm.insert({x,y});
            // mm[x]=y; wont work in multimaps

        }
        else if(s=="erase")
        {
            string x;
            cin>>x;
            if(mm.count(x)!=0)
            {
                mm.erase(mm.find(x));
            }
        }
        else if(s=="print")
        {
            
            string x;
            cin>>x;
            if(mm.count(x)!=0)
            {
                it=mm.find(x);
                cout<<it->second<<endl;
            }
            else{
                cout<<"0"<<endl;
            }
        }
        else if(s=="eraseall")
        {
            string x;
            cin>>x;
            mm.erase(x);
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