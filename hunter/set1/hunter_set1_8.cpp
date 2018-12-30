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
	}
	for(int i=0;i<n-2;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				if(arr[i]+arr[j]==arr[k])
				{
					//cout<<"yes";
					cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
				}
			}
		}
	}
	 
	
	return 0;
}
