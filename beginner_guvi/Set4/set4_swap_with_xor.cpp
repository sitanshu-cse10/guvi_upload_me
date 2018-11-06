#include <iostream>
using namespace std;
int main() {
  int temp,a,b;
  cin>>a>>b;
  a=a^b;
  b=a^b;
  a=b^a;
  cout<<a<<" "<<b;
}
