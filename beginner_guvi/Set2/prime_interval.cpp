#include <iostream>
using namespace std;
void prime_check(bool* prime)
{
     int p=2;
     while(p*p<=1000)
     {
         if(prime[p])
         {
             for(int i=p*2;i<1001;i=i+p)
             {
                 prime[i]=false;
             }
         }
         p=p+1;
     }
}
int main() {
    int n1,n2;
    bool *prime=new bool[1001];
    for(int i=0;i<=1000;i++)
    {
        prime[i]=true;
    }
    cin>>n1>>n2;
   prime_check(prime);
   for(int i=n1+1;i<n2;i++)
   {
       if(prime[i])
       {
           cout<<i<<" ";
       }
   }
}
