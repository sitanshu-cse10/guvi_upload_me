#include <iostream>
using namespace std;
int main() {

    string s1,s2;
    cin>>s1>>s2;
   int n1=s1.length();
   int n2=s2.length();
   if(n1==n2)
   {
       cout<<s1;

   }
   else if(n1<n2)
   {
       cout<<s2;
   }
   else
   {
       cout<<s1;
   }
    return 0;
}

