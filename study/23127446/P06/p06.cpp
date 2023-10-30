#include <iostream>

using namespace std;


// 23127446
// Phạm Chí Bảo Ninh
// 23clc07

// Test case 1
// Input: 5
// Output: 55

// Test case 2
// Input: 7 
// Output: 190

// Test case 3
// Input: 4
// Output: 30

int main()
{
	int n, sum = 0;
	cin >> n;
	while (n < 0)
	{
		cout << "nhap lai." << endl;
		cin >> n;
	}
	for (int i = 1; i <= n; i++)
	{
		sum = sum + i*i;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}
