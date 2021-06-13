#include<bits/stdc++.h>
using namespace std;
void bucketSort(float arr[],int n)
{
	vector<float> b[n];
	int i,j,index;
	i=0;
	float range=(8.45-0.12)/n;
	while(i<n)
	{
		int bi=(arr[i]-0.12)/range;
		b[bi].push_back(arr[i]);
		i++;
	}
	i=0;
	while(i<n)
	{
		sort(b[i].begin(),b[i].end());
		i++;
	}
	i=0,index=0;
	while(i<n)
	{
		j=0;
		while(j<b[i].size())
		{
			arr[index++]=b[i][j];
			j++;
		}
		i++;
	}
}
int main()
{
	float arr[]={4.25,7.23,1.85,8.45,0.12};
	bucketSort(arr,5);
	int i=0;
	while(i<5)
	{
		cout<<arr[i++]<<" ";
	}
	return 0;
}
		
