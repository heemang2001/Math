#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int cnt = -1;

int Fibo(int n)
{
	cnt++;

	if (n == 0)
	{
		return 0;
	}

	if (n == 1)
	{
		return 1;
	}

	else
	{
		return Fibo(n-1) + Fibo(n - 2);
	}
}

int main()
{
	int nTemp;

	cin >> nTemp;

	cout << Fibo(nTemp) << '\n';

	return 0;
}