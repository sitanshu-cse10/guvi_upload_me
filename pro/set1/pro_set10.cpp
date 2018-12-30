#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int* arr=new int[n];
    int* dp=new int[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        int count=0;
       for(int j=1;j<arr[i-1];j++)
       {   //cout<<"hr";
           count+=j;
       }
       //cout<<count<<endl;
       dp[i]=count+dp[i-1];
       //cout<<dp[i];
    }
    cout<<dp[n];
}
