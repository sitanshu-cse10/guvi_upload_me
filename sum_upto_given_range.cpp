#include <iostream>
using namespace std;

int main() {
    int size,upto,ans=0;
    cin>>size>>upto;
    int* input=new int[size];
    for(int i=0;i<size;i++)
    {
      cin>>input[i];
    }
    for(int j=0;j<upto;j++)
    { 
     // cout<<input[j]<<endl;
      ans+=input[j];
    }
    cout<<ans;
    
    
}
