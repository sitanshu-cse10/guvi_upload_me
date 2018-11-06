#include <iostream>
using namespace std;
int main() {
    string num;
    cin>>num;
    int ans=0;
    for(int i=0;num[i]!='\0';i++)
    {
      int curr=num[i]-'0';
      if(curr>=0 && curr<=9)
      {
          ans++;
      }       
    }
    cout<<ans;
    return 0;
}

