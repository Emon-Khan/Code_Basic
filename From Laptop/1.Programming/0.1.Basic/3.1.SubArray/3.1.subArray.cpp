//Time Complexity O(n^3)
#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int i, int j) {
	cout << "{ ";
	for (int k = i; k <= j; k++) {
		cout << arr[k] << " ";
	}
	cout << "}\n";
}
void subArray(int arr[], int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			printArray( arr, i, j);
		}
	}
}
int main() {
/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif*/
	int arr[] = {1, 2, 3, 4};
	int n = sizeof(arr) / sizeof(arr[0]);
	subArray(arr, n);
	return 0;
}
