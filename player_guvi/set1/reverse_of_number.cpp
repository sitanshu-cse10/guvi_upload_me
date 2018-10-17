#include <iostream>
#include <string>

using namespace std;
int main() {
    int n,remainder,reversedNumber=0;
    cin>>n;
    while(n>0)
    {
      remainder=n%10;
      reversedNumber=reversedNumber*10+remainder;
      n/=10;

    }
    cout<<reversedNumber;
}
