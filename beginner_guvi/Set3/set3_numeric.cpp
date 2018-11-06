#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int n=s.length();
    int f=0,dotcount=0;

    for(int i=0;i<n;i++)

    {
        
        if(s[i]>=48 && s[i]<=57)
        {  
            
            continue;
        }
        else
        {  
            if(s[i]=='.')
             {
                 dotcount++;
                 continue;
             }
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"No";
    }
    else
    {
        if(dotcount>1)
        {
            cout<<"No";
        }
        else
        {
            cout<<"yes";
        }
    }
}
