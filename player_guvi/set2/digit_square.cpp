#include <iostream>
using namespace std;
typedef long long ll;
int main() {
    string num;
    ll ans=0;
    cin>>num;
   for(int i=0;i<num.size();i++)
   {
       int a=num[i]-'0';
       ans+=a*a; 
    }
   cout<<ans;
}
