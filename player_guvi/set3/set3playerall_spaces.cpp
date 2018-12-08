#include <bits/stdc++.h>
using namespace std;
void remove_all_spaces(char* str)
{
   int i = 0, count = 0; 
    while (str[i]) 
    { 
        if (str[i] != ' ') 
           str[count++] = str[i]; 
        i++; 
    } 
    str[count] = '\0'; 
  
}

int main() {
    char str[10000];
    cin.getline(str,100);

    //cout<<str;
    remove_all_spaces(str);
    cout<<str;
}
