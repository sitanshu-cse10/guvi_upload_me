#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 //NOTE: IF the number of elements in the merged array is even, then the median is the average of n / 2 th and n/2 + 1th element. 

int main() {
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(n&1)
    {
       int median=arr[n/2];
       cout<<median;
    }
    else 
    {  
        int median1=arr[(n/2)-1];
        int median2=arr[(n/2+1)-1];
       
        cout<<(median1+median2)/2.0;
    }
}
