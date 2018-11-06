#include <iostream>
#define ll long long
void mulitply(ll M1[2][2],ll M2[2][2])
{
  ll firstvalue=M1[0][0]*M2[0][0]+M1[0][1]*M2[1][0];
  ll secondvalue=M1[0][0]*M2[0][1]+M1[0][1]*M2[1][1];
  ll thirdvalue=M1[1][0]*M2[0][0]+M1[1][1]*M2[1][0];
  ll fourthvalue=M1[1][0]*M2[0][1]+M1[1][1]*M2[1][1];
  
  M1[0][0]=firstvalue;
  M1[0][1]=secondvalue;
  M1[1][0]=thirdvalue;
  M1[1][1]=fourthvalue;
}
void power(ll M[2][2],ll n)
{
    if(n==1)
    {
        return;
    }
    power(M,n/2);
    mulitply(M,M);
    if(n%2!=0)
    {
        ll F[2][2]={{1,1},{1,0}};
        mulitply(M,F);

    }

}
ll fibonacci(ll n)
{
    if(n==1 || n==0)
    {
        return n;
    }
    ll M[2][2]={{1,1},{1,0}};
    power(M,n-1);
    return M[0][0];
   


}
using namespace std;
int main() {
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       cout<<fibonacci(i)<<" ";
    }
    return 0;
}
