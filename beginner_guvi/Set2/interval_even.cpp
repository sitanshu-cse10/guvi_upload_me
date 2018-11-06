#include <iostream>
using namespace std;
int main() {
  int n1,n2;
  cin>>n1>>n2;
  if(n1<=n2)
  {
     for(int i=n1+1;i<n2;i++)
     {
          if((i&1)==0)
          {
              cout<<i<<" ";
          }
      }
  }
  else
  {
    for(int i=n2+1;i<n1;i++)
     {
          if((i&1)==0)
          {
              cout<<i<<" ";
          }
      }
  }    
}
