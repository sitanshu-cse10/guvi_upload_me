#include <iostream>
#include <string>

using namespace std;
int main() {
    string s;
    cin>>s;
    for(long long i=0;i<s.size()/2;i++)
    {
        swap(s[i], s[s.size()-1-i]);
    }
    cout<<(s);
}
