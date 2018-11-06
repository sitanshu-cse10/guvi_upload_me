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
    int num;
    bool *prime=new bool[1001];
    for(int i=0;i<=1000;i++)
    {
        prime[i]=true;
    }
    cin>>num;
   prime_check(prime);
    if(prime[num])
    {
        cout<<"yes";
    }
    else
    {
     cout<<"no";   
    }
    
}
