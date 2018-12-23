#include <iostream>
using namespace std;
void call_nearesttoeven(int number)
{
    if(number%2==0)
    {
        cout<<number;
        return;
    }
    call_nearesttoeven(number-1);
}
int main() {
    int number;
    cin>>number;
    call_nearesttoeven(number);
}
