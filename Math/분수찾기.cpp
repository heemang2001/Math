#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int X;
string answer;

string MakeBoonSoo(int num1, int num2)
{
	return to_string(num1) + '/' + to_string(num2);
}

int main()
{
	cin >> X;

	int front = 1;
	int back = 1;
	int cnt = 1;

	if (X == 1)
	{
		answer = MakeBoonSoo(front, back);
	}


	else
	{
		bool bRight = false;
		bool bLeft = true;

		while (1)
		{
			cnt++;

			// 오른쪽 이동
			if (front == 1 && bLeft)
			{
				back++;
				bRight = true;
				bLeft = false;
			}

			// 왼아래 대각이동
			else if (bRight && back > 1)
			{
				front++;
				back--;
			}

			// 아래로 이동
			else if (!bLeft && bRight && back == 1 && front >= 2)
			{
				bRight = false;
				bLeft = true;
				front++;
			}

			// 오른쪽위 대각이동
			else if(bLeft)
			{
				front--;
				back++;
			}

			if (cnt == X)
			{
				answer = MakeBoonSoo(front, back);
				break;
			}
		}
	}

	cout << answer << '\n';

	return 0;
}