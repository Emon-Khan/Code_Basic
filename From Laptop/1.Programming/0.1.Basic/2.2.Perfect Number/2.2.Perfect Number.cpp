#include<bits/stdc++.h>
using namespace std;
void perfectNumber(long long int n)
{
	long long int j = 0;
	vector<long long int>v;
	for (long long int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			long long int k;
			k = n / i;
			if (i != k)
			{
				j = j + i;
				v.push_back(k);
			} else
			{

				j = j + i;
			}
		}
	}
	for (long long int i = v.size() - 1; i >= 0; i--)
	{
		if (v[i] != n) {
			j = j + v[i];
		}
	}
	if (j == n) {
		cout << n << " is a perfect number" << endl;
	} else {
		cout << n << " isn't a perfect number" << endl;
	}
	//cout << j << endl;
}
int main()
{
/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif*/
	long long int n;
	cout << "Type a number: " << endl;
	cin >> n;
	perfectNumber(n);
	return 0;

}
