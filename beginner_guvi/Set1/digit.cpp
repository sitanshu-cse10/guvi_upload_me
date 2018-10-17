#include <iostream>
using namespace std;
int digit(int num)
{
    if(num==0)
    {
        return 0;
    }
    return 1+digit(num/10);
}
int main() {
    int number;
    cin>>number;
    cout<<digit(number);
    
    
}
