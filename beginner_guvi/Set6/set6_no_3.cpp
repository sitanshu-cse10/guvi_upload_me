#include <iostream>
using namespace std;
int main() {
    int number;
    cin>>number;
   int  sum=0;
    while(number>0)
    {
        int rem=number%10;
        sum+=rem;
        number=number/10;
    }
    cout<<sum;
   /*for(int j=i-1;j>=0;j--)
   {
       cout<<answer[j]<<" ";
   }*/
}
