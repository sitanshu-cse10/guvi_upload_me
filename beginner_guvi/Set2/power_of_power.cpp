#include <iostream>
using namespace std;
int power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    if(b%2==0)
    {
        return power(a*a,b/2);
    }
    else
    {
        return a*power(a*a,(b-1)/2);
    }
}
int main() {
   int a,b;
   cin>>a>>b;
   cout<<power(a,b);
}
