#include <iostream>

using namespace std;


// 23127446
// Phạm Chí Bảo Ninh
// 23clc07

// Test case 1
// Input: 2 3
// Output: 3.75556

// Test case 2
// Input: 3 4
// Output: 10.0502

// Test case 3
// Input: 4 2
// Output: 19.6667

int main()
{
	int x, n;
	float expo = 1, sum = 1, factorial = 1;
	cin >> x >> n;
	while (n < 0)
	{
		cout << "nhap lai." << endl;
		cin >> n;
	}
	for (int i = 1; i <= n; i++)
	{
		expo *= x*x;
		factorial *= (2*i)*(2*i-1);
		sum += (expo / factorial);
	}
	cout << sum;
	system("pause");
	return 0;
}
