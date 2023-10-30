#include <iostream>

using namespace std;

// 23127446
// Phạm Chí Bảo Ninh
// 23clc07

// Test case 1
// Input: 6
// Output: 3

// Test case 2
// Input: 25
// Output: 125

// Test case 3
// Input: 15
// Output: 225

int main()
{
	int n, product = 1;
	cin >> n;
	while (n < 0)
	{
		cout << "nhap lai." << endl;
		cin >> n;
	}
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0 && i % 2 == 1)
		{
			product *= i;
		}

	}
	cout << product << endl;
	system("pause");
	return 0;
}
