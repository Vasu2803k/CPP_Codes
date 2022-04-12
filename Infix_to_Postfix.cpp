#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define endl '\n'
//#define int long long int
int prec(char r)
{
    if(r=='+' || r=='-')
    {
        return 1;
    }
    else if(r=='*' || r=='/')
    {
        return 2;
    }
    else if(r=='^' )
    {
        return 3;
    }

    else{
        return -1; // this should be added as it makes the precedence for '(' and ')' which is of other type while conversion written under the solve() code

    }
}

int main()
{
    IOS
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

    stack<char> st;
    string result="";
    for(int i=0;i<s.size();++i)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            result+=s[i];
        }
        else if(s[i]=='(')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            while(!st.empty() && st.top()!='(')
            {
                result+=st.top();
                st.pop();
            }
            if(!st.empty() && st.top()=='(')
            {
                st.pop();
            }
        }

        else
        {

            while(!st.empty() && prec(s[i]) <= prec(st.top()))
            {
                result+=st.top();
                st.pop();
            }
            st.push(s[i]);

        }
    }
    while(!st.empty())
    {
        result+=st.top();
        st.pop();
    }
    cout<<result<<endl;

    }


    return 0;
}
