
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define int long long int
string solve(string s) {
        int n=s.size();
        //char s[]=arr;
        for(int i=0,j=0;i<n && j<n;j++)
        {
            int temp1=j;
            
            if(s[temp1]==' ')
            {
                temp1--;
               

                while(i<temp1)
                {
                    char temp2=s[i];
                    s[i]=s[temp1];
                    s[temp1]=temp2;
                    i++,temp1--;
                    
                }
 
                i=++j;
            }
            else if(temp1==(n-1))
            {
                while(i<temp1)
                {
                    char temp2=s[i];
                    s[i]=s[temp1];
                    s[temp1]=temp2;
                    i++,temp1--;
                    
                }
            }
        }
        return s;
    }
signed main(){
    IOS
    int _t; cin>>_t;
    while(_t--)
        {
            string s=solve("Let's take LeetCode contest");
            cout<<s;
        }
    return 0;
}