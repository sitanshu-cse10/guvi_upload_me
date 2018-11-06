#include <iostream>
using namespace std;
void merge(int* arr,int start,int end)
{
    int size=end-start+1;
    int mid=(start+end)/2;
    int* output=new int[size];
    int i=start;
    int j=mid+1;
    int k=0;
    while(i<=mid && j<=end)
    {
        if(arr[i]<arr[j])
        {
            output[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            output[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        output[k]=arr[i];
        k++;
        i++;
    }
    while(j<=end)
    {
        output[k]=arr[j];
        j++;
        k++;
    }
    int m=0;
    for(int z=start;z<=end;z++)
    {
        arr[z]=output[m];
        m++;
    }
}
void merge_sort(int* arr,int start,int end)
{
       if(start>=end)
       {
           return;
       }
    else{
       int mid=(end+start)/2;
       merge_sort(arr,start,mid);
       merge_sort(arr,mid+1,end);
       merge(arr,start,end);
    }
}
int main() {
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<endl;
    }
}
