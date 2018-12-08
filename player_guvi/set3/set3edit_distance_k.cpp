#include <bits/stdc++.h>
using namespace std;
int edit_distance(string s1,string s2,int m,int n,int** dp)
{
   if(m==0)
   {
       return n; 
   }
   if(n==0)
   {
       return m;
   }
   if(dp[m][n]>-1)
    {
        return dp[m][n];
    }
       int ans;
      if(s1[0]==s2[0])
    {
    ans=0+edit_distance(s1.substr(1),s2.substr(1),m-1,n-1,dp);
   
    }
    else
    {
    int options1=1+edit_distance(s1.substr(1),s2.substr(1),m-1,n-1,dp);
    int options2=1+edit_distance(s1.substr(1),s2,m-1,n,dp);
    int options3=1+edit_distance(s1,s2.substr(1),m-1,n,dp);

    ans=min(options1,min(options2,options3));
    }
    dp[m][n]=ans;
    
    return ans;
}

int main() {
    string s1,s2;
    cin>>s1>>s2;
    int l1,l2;
    l1=s1.length();
    l2=s2.length();
   //cout<<str;
   int** dp=new int*[l1+1];
   for(int i=0;i<=l1;i++)
   {
       dp[i]=new int[l2+1];
       for(int j=0;j<=l2;j++)
       {
           dp[i][j]=-1;
       }
   }
   int ans=edit_distance(s1,s2,l1,l2,dp);
    cout<<ans;
}
