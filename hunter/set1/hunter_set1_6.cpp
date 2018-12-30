#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main(){
	int n,f=0;
	cin>>n;
	int* arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		//cout<<arr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(arr[i]==arr[j])
			{
				cout<<arr[i];
				f++;
				break;
			}
		}
		if(f>=1)
		{
			break;
		}
	}
  if(f==0)
  {
	  cout<<"unique";
  }
  
	return 0;
}
