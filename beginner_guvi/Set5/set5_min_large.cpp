#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<arr[0]<<" "<<arr[n-1];

    return 0;
}

