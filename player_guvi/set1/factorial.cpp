#include <iostream>
#include <string>

using namespace std;
int main() {
    int n;
    long long fact=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<fact;
}
        