#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int n,sum=0;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum/n;
    

    return 0;
}
