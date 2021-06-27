#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int num1, num2;

int main()
{
	cin >> num1 >> num2;

	int minNum = min(num1, num2);
	int maxNum = max(num1, num2);
	int maxYaksoo = 1;

	// 최대 공약수
	for (int i = 2; i <= minNum; i++)
	{
		if (((maxNum % i) == 0) && ((minNum % i) == 0))
		{
			maxYaksoo = max(maxYaksoo, i);
		}
	}

	int nTemp = 1;
	int minBaesoo = 0;

	// 최소 공배수.
	while (1)
	{
		minBaesoo = maxNum * nTemp;

		if (minBaesoo % minNum == 0)
		{
			break;
		}

		nTemp++;
	}

	cout << maxYaksoo << '\n';
	cout << minBaesoo << '\n';

	return 0;
}