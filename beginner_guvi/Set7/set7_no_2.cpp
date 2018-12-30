#include <iostream>
using namespace std;
int main() {
    char str[1000000];
    cin>>str;
    int f=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==48 || str[i]==49)
        {
            continue;
        }
        else
        {
            f++;
            break;
        }
    }
    if(f==0)
    {
        cout<<"yes";
    }
    else{

        cout<<"no";
    }
}
