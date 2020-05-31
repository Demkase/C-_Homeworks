// Задача 15.2
// Напишіть процедуру
// void GenerateArithmSequence(int arr[], int first, int step)
// яка заповнює масив цілими числами починаючи з first,
// а кожне наступне на step більше.
// Це арифметична прогресія.
// Наприклад:
// GenerateArithmSequence(A,5,2);:
//      5      7      9     11     13     15     17     19     21     23     25     27     29
// GenerateArithmSequence(A,12,-3);:
//    12      9      6      3      0     -3     -6     -9    -12    -15    -18    -21    -24
//==========================================================================================
// Задача 15.2.1 (необов'язкова)
// Напишіть процедуру
// void GenerateFibonacci(int arr[])
// яка заповнює масив послідовністю Фібоначчі (нагугліть).
// Приклад писати не буду :slightly_smiling_face:
//==========================================================================================
// Задача 15.3
// Напишіть процедуру
// void SwapEnds(int arr[])
// яка міняє місцями перший та останній елементи масиву
// A:
//     -10      7      2     -2    -10     -1      4     -1      8    -12      6    -13     -4
// New A:
//      -4      7      2     -2    -10     -1      4     -1      8    -12      6    -13    -10
// B:
//       2      3      4      5      6      7      8      9     10     11     12     13     14
// New B:
//      14      3      4      5      6      7      8      9     10     11     12     13     2
//===========================================================================================
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

const int arraySize = 13;

void PrintArray(int arr[])
{
	for (int i = 0; i < arraySize; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << " " << endl;
}

void GenerateArithmSequence(int arr[], int first, int step)
{
	arr[0] = first;
	int result = first + step;
	for (int i = 1; i < arraySize; ++i)
	{
		arr[i] = result;
		result += step;
	
	}	
	cout << "Arithm Sequence" << endl;
}
void GenerateFibonacci(int arr[])
{
	arr[0] = 0;
	arr[1] = 1;
	for(int i = 2; i < arraySize; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	cout << "Fibonacci" << endl;
}
void SwapEnds(int arr[])
{
	int swap = arr[0];
	arr[0] = arr[arraySize - 1];
	arr[arraySize - 1] = swap;
	cout << "Swap" << endl;
}
int main()
{
	int A[arraySize];
	GenerateFibonacci(A);
	PrintArray(A);
	GenerateArithmSequence(A, 5, 2);
	PrintArray(A);
	// GenerateArithmSequence(A,12,-3);
	// PrintArray(A);
	// SwapEnds(A);
	// PrintArray(A);
}