#include <bits/stdc++.h>
using namespace std;
void minAbsSumPair(int arr[], int n)
{
	int l, r , min_sum, sum = 0, min_l, min_r;

	sort(arr,arr+n);
    l = 0; r = n-1;
	min_sum = arr[l] + arr[r];
	min_l = l; 
	min_r = r; 
	
	while(l < r)
	{
		sum = arr[l] + arr[r];

		if(abs(sum) < abs(min_sum))
		{
			min_sum = sum;
			min_l = l;
			min_r = r;
		}
		if(sum < 0)
			l++;
		else
			r--;

	}

	cout<<arr[min_l]<<" "<<arr[min_r];
}
int main()
{
    int n;
    cin>>n;
	int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
	minAbsSumPair(arr, n);
	getchar();
	return 0;
}
