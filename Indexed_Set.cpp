#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long int
void solve()
{
    int q;
    cin>>q;
    set<int> st;
    set<int>::iterator it ;
    while(q--)
    {
        string s;
        cin>>s;
        if(s=="add")
        {
            int x;
            cin>>x;

            if(!st.count(x))
            {
                st.insert(x);
            }
        }
        else if(s=="remove")
        {
            int x;
            cin>>x;
            if(st.count(x))
            {
                st.erase(x);
            }
        }
        else if(s=="find")
        {
            int x;
            cin>>x;
            if(x<st.size())
            {    
                it=st.begin();
                for(int i=1;i<=x;i++)
                {
                    it++;
                }
                cout<<*it<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
        }
        else if(s=="findpos")
        {
            int x;
            cin>>x;
            int pos=0;
            if(st.count(x))
            {
                it=st.begin();
                while((it++)!=st.find(x))
                {
                    pos++;
                }
                cout<<pos<<endl;
            }
            else{

                pos=st.size();
                cout<<pos<<endl;
            }
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
/* 
The above code is running well,but it cannot pass all the hidden test cases

indexed_set
 can be accessed using indices like vectors
 we need to add some code, but it is not running in vs code, like including the libraries for those 
 policy data structures .
 #include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
 typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

value can be found using a function when position is given

order-position
indexed_set.find_by_order(pos);
--> return an iterator pointing to the value

position can e found using a function when value is given
key-value
indexed_set.order_of_key(element);
--> if element is not found, then we get the position that 
the element would have in the set


*/
