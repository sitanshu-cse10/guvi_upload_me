#include <iostream>
using namespace std;
int main() {
    int n,max=0;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<max;
}
