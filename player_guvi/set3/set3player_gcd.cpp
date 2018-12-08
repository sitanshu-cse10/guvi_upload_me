#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    if(b>a)
    {
        gcd(b,a);
    }
    gcd(b,a%b);
}
int main() {
    int a,b,ans;
    cin>>a>>b;
    ans=gcd(a,b);
    cout<<ans;
}
