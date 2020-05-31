// В процедурах/функціях необхідно лише міняти масив, не потрібно нічого виводити на екран.
// Все виведення на екран робиться або в основній процедурі, або в окремій, яка створена спеціально для цього (PrintArray());
// Задача 14.4
// Напишіть процедуру, яка міняє місцями в масиві 3 та 4 елементи
// Задача 14.5
// В масив закралися погані числа! Треба їх обнулити!
// Напишіть процедуру
// void ClearValue(int arr[], int badValue)
// яка міняє на 0 всі значення що дорівнюють заданому (badValue).
// Наприклад, якщо запустити:
// ClearValue(A, 8);
// ClearValue(Test1, 8);
// Має вийти:
// A:
//     -10      7      2     -2    -10     -1      4     -1      8    -12      6    -13     -4
// New A:
//     -10      7      2     -2    -10     -1      4     -1      0    -12      6    -13     -4
// Test1:
//       2      3      4      5      6      7      8      9     10     11     12     13     14
// New Test1:
//       2      3      4      5      6      7      0      9     10     11     12     13     14
// Задача 14.6 (необов'язкова)
// Напишіть процедуру, яка замінює максимальний елемент масиву на 0.
// Наприклад: (edited) 
// A:
//     -10      7      2     -2    -10     -1      4     -1      8    -12      6    -13     -4
// New A:
//     -10      7      2     -2    -10     -1      4     -1      0    -12      6    -13     -4
// Test1:
//       2      3      4      5      6      7      8      9     10     11     12     13     14
// New Test1:
//       2      3      4      5      6      7      8      9     10     11     12     13      0
//============================================================================================
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

const int arraySize = 13;
int Test1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, };
int Test2[] = {-13, -12, -11, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1, };
int Test3[] = {-7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, };

void GenerateArray(int arr[])
{
	for (int i = 0; i < arraySize; ++i)
	{
		arr[i] = rand() % 100;
	}	
}
void PrintArray(int arr[])
{
	for (int i = 0; i < arraySize; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << " " << endl;
}
void GenerateTestArray(int arr[])
{
	for (int i = 0; i < arraySize; ++i)
	{
		arr[i] = i + 1;
	}
}
void MakeSwapArray(int arr[])
{
	int swap = arr[2];
	arr[2] = arr[3];
	arr[3] = swap;
}
void ClearValue(int arr[], int badValue)
{
	for (int i = 0; i < arraySize; ++i)
	{
		if (badValue == arr[i])
		{
			arr[i] = 0;
		}
	}
}
void MaxValueZero(int arr[])
{
	int maxVal = arr[0];
	int digit = 0;
	for(int i = 1; i < arraySize; ++i)
	{
		if(maxVal < arr[i])
		{
			maxVal = arr[i];
			digit = i;
		}
	}
	arr[digit] = 0;
}
int main()
{
	srand(time(0));
	int A[arraySize];
	GenerateArray(A);
	// GenerateTestArray(A);
	PrintArray(A);
//===============14.4========
	// MakeSwapArray(A);
	// PrintArray(A);
	
//===============14.5========
	// int badValue;
	// cout << "Bad Value: ";
	// cin >> badValue;
	// ClearValue(A, badValue);
	// ClearValue(A, 8);
	// ClearValue(Test1, 8);
	// PrintArray(A);
	// PrintArray(Test1);
//===============14.6========
	MaxValueZero(A);
	PrintArray(A);

	// PrintArray(Test1);
	// MaxValueZero(Test1);
	// PrintArray(Test1);

	// PrintArray(Test2);
	// MaxValueZero(Test2);
	// PrintArray(Test2);

	// PrintArray(Test3);
	// MaxValueZero(Test3);
	// PrintArray(Test3);
}