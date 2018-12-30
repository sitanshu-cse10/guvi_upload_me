#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    if(n%2==0)
    {
        if(m%2==0)
        {
           
            cout<<"even";       
        }
        else
        {
            cout<<"odd";
        }
    }
    else
    {
        if(m%2==0)
        {
           
            cout<<"odd";       
        }
        else
        {
            cout<<"even";
        }        
    }
    
}
