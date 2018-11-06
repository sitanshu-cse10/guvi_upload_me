#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 //NOTE: IF the number of elements in the merged array is even, then the median is the average of n / 2 th and n/2 + 1th element. 

int main() {
    int n;
    cin>>n;
    if(n<60)
    {
        cout<<0<<" "<<n;
    }
    else 
    {
        int hr=n/60;
        cout<<hr<<" "<<n-hr*60;
    }
    
}
