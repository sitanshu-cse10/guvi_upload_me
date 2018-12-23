#include <iostream>
using namespace std;
int main() {
    int number,count=0,k;
    int* arr=new int[number];
    cin>>number>>k;
    for(int i=0;i<number;i++)
    {
         cin>>arr[i];
         if(arr[i]==k)
         {
             count+=1;
         }
    }
    if(count>=1)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
   
}
