#include<bits/stdc++.h>
using namespace std;
void divisor(int n)
{
	vector<int>v;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			int k;
			k = n / i;
			if (i != k)
			{
				cout << i << " ";
				v.push_back(k);
			} else
			{
				cout << i << " ";
			}
		}
	}
	for (int i = v.size() - 1; i >= 0; i--)
	{
		cout << v[i] << " ";
	}
	//return 0;
}
int main()
{
/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif*/
	int n;
	cout << "Type a number: " << endl;
	cin >> n;
	divisor(n);
	return 0;

}
