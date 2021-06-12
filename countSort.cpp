#include<bits/stdc++.h>
#define RANGE 255
using namespace std;
void countSort(int arr[],int n)
{
	int output[n];
	int count[RANGE+1],i;
	memset(count,0,sizeof(count));
	i=0;
	while(i<n)
	{
		++count[arr[i]];
		++i;
	}
	i=1;
	while(i<=RANGE)
	{
		count[i]+=count[i-1];
		++i;
	}
	i=0;
	while(i<n)
	{
		output[count[arr[i]]-1]=arr[i];
		--count[arr[i]];
		++i;
	}
	i=0;
	while(i<n)
	{
		arr[i]=output[i];
		++i;
	}
}
int main()
{
	int arr[]={1,4,1,2,7,5,2};
	countSort(arr,7);
	int i=0;
	while(i<7)
	{
		cout<<arr[i++]<<" ";
	}
	return 0;
}
