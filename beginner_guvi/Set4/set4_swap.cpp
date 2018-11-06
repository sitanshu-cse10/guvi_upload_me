#include <iostream>
using namespace std;
int main() {
  int temp,a,b;
  cin>>a>>b;
  temp=b;
  b=a;
  a=temp;
  cout<<a<<" "<<b;
}
