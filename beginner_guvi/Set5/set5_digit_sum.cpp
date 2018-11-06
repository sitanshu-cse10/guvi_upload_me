#include <iostream>
using namespace std;
int main() {
    string num;
    cin>>num;
    int ans=0;
    for(int i=0;num[i]!='\0';i++)
    {
      int curr=num[i]-'0';
      ans+=curr;        
    }
    cout<<ans;
    return 0;
}

