#include <iostream>
#include <math.h>

using namespace std;


// 23127446
// Phạm Chí Bảo Ninh
// 23clc07

// Test case 1
// Input:
// Output:

// Test case 2
// Input:
// Output:

// Test case 3
// Input: 
// Output: 

int main()
{
	int n;
	float term = 0;
	cout << "Input: ";
	cin >> n;
	while (n < 0)
	{
		cout << "nhap lai." << endl;
		cin >> n;
	}
	for (int i = 0; i < n; i++)
	{
		term = sqrt(n-i + term);
	}
	cout << term << endl;;
	system("pause");
	return 0;
}
