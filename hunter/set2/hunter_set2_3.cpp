#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(string input, int start, int end) 
{
     if(input[0] == '\0' || input[1] == '\0') 
                 {
                    return true;
               }
       if(start >= end)
         {
              return true;
          } 
if(input[start] == input[end]) {
return checkPalindrome(input, start + 1, end - 1);
}
else {
return false;
}
}
int main() {
  
  string str;
  cin>>str;
  int n=str.length();
  cout<<checkPalindrome(str,0,n-1);

}

