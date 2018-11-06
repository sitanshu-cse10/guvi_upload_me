#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int n,sum=0;
    int* arr=new int[n];
    for(int i=0;i<2;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}

