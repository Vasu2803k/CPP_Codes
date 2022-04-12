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
        string s;
        cin>>s;
        int ans=0;
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push('(');
            }
            else if(st.empty() && s[i]==')' ||s[i]==')' && st.top()==')')
            {
                st.push(')');
            }
            else if(s[i]==')')
            {
                st.pop();
            }

        }
        ans=st.size();
        cout<<ans<<endl;

    }

    return 0;
}
