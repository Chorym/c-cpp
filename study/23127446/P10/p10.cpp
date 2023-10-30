#include <iostream>

using namespace std;


// 23127446
// Phạm Chí Bảo Ninh
// 23clc07

// Test case 1
// Input: 2 3
// Output: 8

// Test case 2
// Input: 3 2
// Output: 9

// Test case 3
// Input: 5 3
// Output: 125

int main()
{
	int x, n, expo = 1;
	cin >> x >> n;
	while (n < 0)
	{
		cout << "nhap lai." << endl;
		cin >> n;
	}
	for (int i = 1; i <= n; i++)
	{
		expo = expo*x;
	}
	cout << expo << endl;
	system("pause");
	return 0;
}
