#include <iostream>
#include "arrayTools.h"

using namespace std;

void inputArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "]: ";
		cin >> array[i];
	}
}

void outputArray(int array[], int n)
{
	cout << "\n" << "Output Array: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "] = " << array[i] << endl;
	}
}

void bubbleSort(int array[], int n)
{
	bool sorted = false;
	while (!sorted)
	{
		sorted = true;
		for (int i = 0; i < n - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				sorted = false;
			}
			if (!sorted) break;
		}
	}
}

void combineSortedArray(int array1[], int n1, int array2[], int n2, int outputArray[], int outputArraySize)
{
	int a1 = 0, a2 = 0;
	for (int i = 0; i < outputArraySize; i++)
	{
		if (a1 != n1 && a2 != n2)
		{
			if (array1[a1] < array2[a2])
			{
				outputArray[i] = array1[a1];
				a1++;
			}
			else
			{
				outputArray[i] = array2[a2];
				a2++;
			}
		}
		else if (a1 == n1)
		{
			outputArray[i] = array2[a2];
			a2++;
		}
		else
		{
			outputArray[i] = array1[a1];
			a1++;
		}
	}
}

void insertElement(int array[], int& n, int x, int position)
{
	for (int i = n; i >= position; i--)
	{
		if (i == position)
		{
			array[i + 1] = array[i];
			array[i] = 0;
			break;
		}
		array[i + 1] = array[i];
	}
	array[position] = x;
	n++;
}