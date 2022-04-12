#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define int long long int
// iterative method - O(logn)
/*
void solve()
{
    vector<int> arr={1,2,3,4,4,5,5,5,5,6,6};
    int n=arr.size();
    int l=0, r=n-1,m=0;
    vector<int>::iterator it1;
    vector<int>::iterator it2;

    if(!arr.empty()){
        int ind1=distance(arr.begin(),lower_bound(arr.begin(),arr.end(),5));
        if(it1!=arr.end())
        {
            int ind2=distance(arr.begin(),upper_bound(arr.begin(),arr.end(),5));
            cout<<"First: "<<ind1<<" "<<"second: "<<ind2-1<<" ";

        }
        else{
            cout<<"No expected data";
        }
    }
    else{
        cout<<"No Data";
    }
    cout<<endl;
    
}
*/
/*
vector<int> solve()
{
    vector<int> arr1={1,2,3,3,4,4,4,4,5};
    int target=5;
    int n=arr1.size();
    vector<int> ans;
    int temp1=0,count1=0;
    int count_val=count(arr1.begin(),arr1.end(),target);
    if(arr1.empty())
    {
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
    else if( n>=1 and count_val<1)
    {
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
        
    for(int i=0;i<n;i++)
    {
        if(arr1[i]==target && count1==0)
        {
            temp1=i;
            count1++;
        }
        else if(arr1[i]==target && count1>0){
            count1++;
        }
    }
    ans.push_back(temp1);
    ans.push_back(temp1+count1-1);
    return ans;
}*/
int solve(vector<int> arr,vector<int> &ans,int target,int temp)
{
    int n=arr.size();
    int l=0,r=n-1;
    
    int ans1=-1;
    while(l<r){
        int mid=l+(r-l)/2;
        if(arr.empty()){
            ans1=-1;
        }
        else if(arr[mid]<target)
        {
            l=mid+1;
        }
        else if(arr[mid]>target)
        {
            r=mid-1;
        }
        else
        {
            ans1=mid;
            if(temp==-1)
            {
                r=mid+temp;
            }
            else{
                l=mid+temp;
            }
        }
    }
    return ans1;
}
signed main(){
    IOS
    int _t; cin>>_t;
    vector<int> arr={1,2,3,4,4,5,5,5,5,6,6};
    vector<int> ans;
    int target=5;
    while(_t--)
    {
        int ind1=solve(arr,ans,target,-1);
        int ind2=solve(arr,ans,target,1);
        if(ind1==-1)
        {
            cout<<"-1"<<endl;
        }
        else{
            cout<<ind1<<" "<<ind2;
        }
    }
    return 0;
}