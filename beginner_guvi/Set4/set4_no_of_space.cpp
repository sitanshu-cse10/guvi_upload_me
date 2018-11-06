#include <iostream>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    int c=str.length(),count=0;
    for(int i=0;i<c;i++)
    {
        if(str[i]==' ')
        {
            
            count++; ;
        }
    }
    cout<<count;
}