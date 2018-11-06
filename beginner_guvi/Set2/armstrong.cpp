#include <iostream>
using namespace std;
int main() {
    int r,temp;
    long long sum=0,num;
    cin>>num;
    temp=num;
    while(num>0)
    {    
           r=num%10;    
           sum=sum+(r*r*r);    
           num=num/10;   
    }   

    if(temp==sum)
    {
        cout<<"yes";
    } 
   else
   {
      cout<<"no";
       
   }
    
}
