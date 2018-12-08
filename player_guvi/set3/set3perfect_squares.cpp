#include <bits/stdc++.h>
using namespace std;
void prefect_squares(int a, int b) 
{ 
    cout<<(floor(sqrt(b)) - ceil(sqrt(a)) + 1);

} 
int main() {
    int a,b;
    cin>>a>>b;
    prefect_squares(a,b);
}
