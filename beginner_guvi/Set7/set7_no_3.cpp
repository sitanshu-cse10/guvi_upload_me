#include <iostream>
using namespace std;
int main() {
    int n=10,small=999999;
    int arr[n];

    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
       if(arr[i]<=small)
       {
           small=arr[i];
       }
    }
    cout<<small;
}
