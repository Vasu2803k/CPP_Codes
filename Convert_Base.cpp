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
        int a,b;
        cin>>s>>a>>b;
        // convert base a to decimal
        int num=0;
        int len=s.size();
        int pow=1;
        for(int i=len-1;i>=0;i--)
        {
            int x;

            if(s[i]>='0' && s[i]<='9')
            {
                x=(s[i]-'0');
            }
            else{
                x=(s[i]-'A'+10);
            }
            num+=x*pow;
            pow*=a;
        }


        string ans="";
        while(num)
        {
            int x=num%b; // divide the number with the to_be converted base
            // to change in to any base we need to divide with the base, using modulo operator.
            // if the digit is higher we need to divide it with the base using division operator which gives the quotient
            char c;
            if(x>=0 && x<=9)
            {
                c=(x+'0');
            }
            else{
                c=(x+'A'-10);
            }
            ans+=c;
            num/=b;
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;

    }
    return 0;
}