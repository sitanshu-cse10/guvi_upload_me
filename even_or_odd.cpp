#include <iostream>
using namespace std;

int main() {
    int number;
    cin>>number;
    if(number&1)
    {
        cout<<"Odd";
    }
    else if(number==0 || number <0 )
    {
        cout<<"Invalid Input";
    }
    else
    {
        cout<<"Even";
    }
}
