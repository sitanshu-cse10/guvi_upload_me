#include <iostream>
using namespace std;
int main() {
    int number,count=0;
    cin>>number;

    while(number>0)
    {
      count++;
      number=number/10;
    }
    cout<<count;
}
