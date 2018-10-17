#include <iostream>
using namespace std;
int main()
    {   
        string convert;
        //cin>>convert;
            getline(cin,convert);
       bool check=true;
        for(int i=0;convert[i]!='\0';i++)
        {
            if(isalpha(convert[i]))
            {
                if(check)
                {
                    convert[i] = toupper(convert[i]);
                    check= false;

                }
            }
            else {
                convert[i] =tolower(convert[i]);
            }
          if(convert[i]==' ')
          {
              check=true;
          }
        }
        cout<<convert;
             
    }
  