#include <iostream>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    int c=str.length(),count=1;
    for(int i=0;i<c;i++)
    {
        if(str[i]>=48 && str[i]<=57)
        {
            
            count++; ;
        }
    }
    cout<<count;
}