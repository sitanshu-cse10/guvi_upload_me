#include <iostream>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    int c=str.length(),count=0;
    for(int i=0;i<c;i++)
    {
        if(str[i]>=48 && str[i]<=57 || str[i]>=65 && str[i]<=91 ||  str[i]>=92 && str[i]<=118)
        {
            
            continue;
        }
        count++;
    }
    cout<<count;
}