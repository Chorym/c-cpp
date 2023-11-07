#include <iostream>
#include <vector>
#include "arrayTools.h"

using namespace std;

void question264()
{
	int array1[64] = { 0 };
	int array2[64] = { 0 };
	int n1 = 0, n2 = 0;
	cout << "Array1 size: ";
	cin >> n1;
	inputArray(array1, n1);
	cout << "Array2 size: ";
	cin >> n2;
	inputArray(array2, n2);

	int combinedArray[128] = { 0 };
	int combinedArraySize = n1 + n2;

	bubbleSort(array1, n1);
	bubbleSort(array2, n2);
	outputArray(array1, n1);
	outputArray(array2, n2);
	combineSortedArray(array1, n1, array2, n2, combinedArray, combinedArraySize);
	outputArray(combinedArray, combinedArraySize);
}

void question266()
{
	int array[64] = { 0 };
	int n = 0;
	int x = 0;
	int position_k = 0;
	cout << "Array size: ";
	cin >> n;
	inputArray(array, n);
	cout << "Element to insert: ";
	cin >> x;
	cout << "Position to insert: ";
	cin >> position_k;
	insertElement(array, n, x, position_k);
	outputArray(array, n);
}

int main()
{
	question264();
	question266();
	return 0;
}