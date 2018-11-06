#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int max1=0;
    for(int i=0;i<9;i++)
    {  
        cin>>arr[i];
        if(arr[i]>=max1)
        max1=arr[i];
    }
    cout<<max1;
        return 0;
}
