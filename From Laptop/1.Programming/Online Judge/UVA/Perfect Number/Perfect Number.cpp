#include<bits/stdc++.h>
using namespace std;
void perfectNumber(long long int n)
{
	long long int j = 0;
	for (long long int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			long long int k;
			k = n / i;
			if (i != k)
			{
				j = j + i;
				if (k != n) {

					j = j + k;
				}
			} else
			{
				j = j + i;
			}

		}
	}
	if (j == n) {
		cout << n << " is a perfect number." << endl;
	} else {
		cout << n << " isn't a perfect number." << endl;
	}
	//cout << j << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long int n;
	int t;
	int value1 = 2, p;
	long long int num1, num2;
	cin >> t;
	while (t--) {
		cin >> p;
		num1 = pow(value1, p - 1);
		num2 = pow(value1, p);
		n = num1 * (num2 - 1);
		perfectNumber(n);
	}
	return 0;

}