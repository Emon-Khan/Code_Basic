#include<bits/stdc++.h>
using namespace std;

int main()
{
int N, K, T, digit;
cin>>T;
while(T--)
{
	//int max;
	cin>>N>>K;
	int arr[N+1];
	int brr[N-K+2];
	if(N>K)
	{
		for(int i=0; i<N; i++)
		{
			cin>>digit;
			arr[i]=digit;
			/*while(i>0)
			{
				arr[i]+=arr[i+1];
				cout<<"sum"<<arr[i]<<" ";
			}*/
			//arr[i]+=arr[i+1];
			for(int j=0; j<N-K+1; j++)
			{
				for(int y=0; y<N-K+1; y++)
				{
					brr[j]+=arr[j+y];
				}
			}
			for(int l=1; l<N-K+1; l++)
			{
				if(brr[0]<brr[l]){
					brr[0]=brr[l];
				}
			}
		}
		cout<<brr[0]<<endl;
	}/*else{
		cout<<"Invalid"<<endl;
	}*/
}
}

