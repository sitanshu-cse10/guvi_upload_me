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
        check=check^arr[i];
    }
   cout<<check;
    
}
