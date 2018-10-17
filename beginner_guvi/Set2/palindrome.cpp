#include <iostream>
using namespace std;
void palindrome(int a)
{
    int reverse=0,rem;
    int temp=a;
    while(temp!=0)
     {
        rem=temp%10;
        reverse=reverse*10+rem;
        temp/=10;
         
     }
     if(reverse==a){
     cout<<"yes";
     }
     else
     {
         cout<<"no";
     }
}
int main() {
   int num;
   cin>>num;
   palindrome(num);
}
