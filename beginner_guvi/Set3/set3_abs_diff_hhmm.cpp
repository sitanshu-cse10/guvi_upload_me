#include <iostream>
#include <cstdlib>

using namespace std;
int main() {
    int h1,h2,m1,m2,dh1,dm1;
    cin>>h1>>m1;
    cin>>h2>>m2;
    dh1=abs(h1-h2);
    dm1=abs(m1-m2);
    cout<<dh1<<" "<<dm1;  
}
