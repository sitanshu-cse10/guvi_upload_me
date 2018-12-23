#include <iostream>
using namespace std;
int main() {
    int number;
    cin>>number;
   int  count=0;
   int* answer=new int[100]();
   int i=0;
   int rem;
    while(number>0)
    {
        rem=number%10;
        answer[i++]=rem;
        number=number/10;
    }
    
   for(int j=i-1;j>=0;j--)
   {
       cout<<answer[j]<<" ";
   }
}
