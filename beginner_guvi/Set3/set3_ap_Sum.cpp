#include <iostream>
using namespace std;
int main() {
    int n,a,d;
    long long int sum=0;
    cin>>n>>a>>d;
    sum=n*(2*a+(n-1)*d);
    cout<<sum/2;
}
