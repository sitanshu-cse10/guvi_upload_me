#include <iostream>
#include<set>
using namespace std;
int main() {
    int n,f=0;
    cin>>n;
    set<int> num;
    for(int i=1;i<=10;i++)
      {
        num.insert(i);
      }
     set<int>::iterator it;
     for(it=num.begin();it!=num.end();it++)
        {
              if(num.find(n)==num.end())
              {
                f=1;
              }
              
        } 
    if(f==1)
      {
          cout<<"no";

      }
    else
    {
        cout<<"yes";
    }
    return 0;
}

