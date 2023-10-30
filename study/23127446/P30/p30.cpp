#include <iostream>

using namespace std;

// 23127446
// Phạm Chí Bảo Ninh
// 23clc07

// Test case 1
// Input: 6
// Output: YES

// Test case 2
// Input: 9
// Output: NO

// Test case 3
// Input: 3
// Output: YES

int main()
{
	int n, sum = 0;
	bool isPerfectNum = false;
	cin >> n;
	while (n < 0)
	{
		cout << "nhap lai." << endl;
		cin >> n;
	}
	for (int i = 1; i <= n; i++)
	{
		sum += i;
		if (n == sum)
		{
			isPerfectNum = true;
			break;
		}

	}
	if (isPerfectNum)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	system("pause");
	return 0;
}
