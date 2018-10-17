#include <iostream>
using namespace std;
int main()
    {   char temp;
        string check;
        cin>>check;
        int i;
        for(i=0;i<check.size();i+=2)
        {
            temp=check[i];
            check[i]=check[i+1];
            check[i+1]=temp;
        }
         
         cout<<check;
         
    }

