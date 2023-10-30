#include <iostream>

using namespace std;


// 23127446
// Phạm Chí Bảo Ninh
// 23clc07

// Test case 1
// Input: 2 3
// Output: 42

// Test case 2
// Input: 2 2
// Output: 10

// Test case 3
// Input: 4 2
// Output: 68

int main()
{
	int x, n, expo = 1, sum = 0;
	cin >> x >> n;
	while (n < 0)
	{
		cout << "nhap lai." << endl;
		cin >> n;
	}
	expo = x;
	sum = x;
	for (int i = 1; i < n; i++)
	{
		expo *= x*x;
		sum += expo;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}
