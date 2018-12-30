#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int check=0;
    int* arr=new int[n+1];
    for(int i=1;i<=n;i++)
    { 
        cin>>arr[i];
        if(arr[i]==i)
         {
             cout<<arr[i];
             check+=1;
         }

    }
    if(check==0)
    {
        cout<<-1;
    }
}
