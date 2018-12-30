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
		if(i%2==0)
		{
			if(arr[i]%2!=0)
			{
				cout<<arr[i]<<" ";
			}
		}
		else
		{
			if(arr[i]%2==0)
			{
				cout<<arr[i]<<" ";
			}
		}
	}
	 
	
	return 0;
}
