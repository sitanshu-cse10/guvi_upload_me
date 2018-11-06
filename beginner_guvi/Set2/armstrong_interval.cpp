#include <iostream>
using namespace std;
int main() {
    int r,temp;
    long long num1,num2;
    cin>>num1>>num2;
    for(int i=num1+1;i<num2;i++)
    {   
         long long num=i,sum=0;
          while(num>0)
           {    
             r=num%10;    
             sum=sum+(r*r*r);    
             num=num/10;   
          }   
        if(i==sum)
       {
         cout<<i<<" ";
      } 
     
    
    }
    
}
