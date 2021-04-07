#include<bits/stdc++.h>
using namespace std;
void findprefixSum(int arr[],int n,int prefixSum[])
{
	prefixSum[0]=arr[0];
	for(int i=1; i<n; i++)
	{
		prefixSum[i]=prefixSum[i-1]+arr[i];
	}
}
int main()
{
	int arr[]={10, 60, 5, 43, 31};
	int n = sizeof(arr)/sizeof(arr[0]);
	int prefixSum[n];
	findprefixSum(arr, n, prefixSum);
	for(int i=0; i<n; i++)
	{
		cout<<prefixSum[i]<<endl;
	}
}
