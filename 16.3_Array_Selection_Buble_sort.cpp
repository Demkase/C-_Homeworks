// Задача 16.3
// Напишіть процедуру, яка шукає максимальний елемент не по всьому масиву, 
// а лише в його другій половині (якщо кількість непарна - в більшій частині).
// Після того як знайшли, поміняйте його місцями з першим елементом.
// має вийти:
// A:
//  -10      7      2     -2    -10     -1      4     -1      8    -12      6    -13     -4
// New A:
//    8      7      2     -2    -10     -1      4     -1    -10    -12      6    -13     -4
//===========================================================================================
// 16.4
// Напишіть процедуру
// void SwapMin(int arr[], int firstIndex)
// яка шукає мінімальний елемент не по всьому масиву, а лише в його "хвості", починаючи з заданого(firstIndex),
// а потім міняє його з першим елементом "хвоста" (заданий firstIndex).
// Наприклад:
// SwapMin(A, 7);
// A:
//  -10      7      2     -2    -13     -1      4     -1      8    -12      6    -11     -4
// New A:
//  -10      7      2     -2    -13     -1      4    -12      8     -1      6    -11     -4
// Ще один приклад:
// SwapMin(A, 1);
// має вийти:
// A:
//  -10      7      2     -2    -13     -1      4     -1      8    -12      6    -11     -4
// New A:
//  -10    -13      2     -2      7     -1      4     -1      8    -12      6    -11     -4
//==========================================================================================
// Задача 16.4.1 (необов'язкова)
// А тепер, запустіть процедуру SwapMin() по черзі зі значеннями 0,1,2 ... N-1.
// Наприклад, для масиву з 12 елементів:
// SwapMin(A, 0);
// SwapMin(A, 1);
// ...
// SwapMin(A, 11);
// Подивіться на результат і потім оформіть цей цикл у окрему процедуру.
//==========================================================================================
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

int ArrayTest[] = {-10,7,2,-2,-10,-1,4,-1,8,-12,6,-13,-4};

const int arraySize = 13;
//Random array===============================
void GenerateArray(int arr[])
{
	for (int i = 0; i < arraySize; ++i)
	{
		arr[i] = rand() % 100;
	}	
}
//Array (1, 2, 3, 4, ...)====================
void GenerateTestArray(int arr[])
{
 	for (int i = 0; i < arraySize; ++i)
	{
		arr[i] = i + 1;
	}
}
//Print array================================
void PrintArray(int arr[])
{
	for (int i = 0; i < arraySize; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << " " << endl;
}

void SwapMax(int arr[])
{
	int maxIndex = 0;
	for(int i = arraySize/2; i <= arraySize; ++i)
	{
		if(arr[arraySize/2] < arr[i])
		{
			maxIndex = i;
		}
	}
	
	int swap = arr[maxIndex];
	arr[maxIndex] = arr[0];
	arr[0] = swap;
}

void SwapMin(int arr[], int firstIndex)
{
	int minIndex = firstIndex;
	for(int i = firstIndex; i < arraySize; ++i)
	{
		if(arr[minIndex] > arr[i])
		{
			minIndex = i;
		}
	}
	int swap = arr[firstIndex];
	arr[firstIndex] = arr[minIndex];
	arr[minIndex] = swap;
}
void selectionSort(int arr[])
{
	for(int i = 0; i < arraySize; i++)
	{
		SwapMin(arr, i);
	} 
}
void bubbleSort(int arr[])
{
	for(int i = 0; i < arraySize; i++)
	{
		for(int j = i; j < arraySize; j++)
		{
			if(arr[j] < arr[i])
			{
				int swap = arr[i];
				arr[i] = arr[j];
				arr[j] = swap;
			}
		}
	}
}
int main()
{
	srand(time(0));
	int A[arraySize];

	cout << "Selection Sort" << endl;
	GenerateArray(A);
	PrintArray(A);
	selectionSort(A);
	PrintArray(A);
	cout << "Bubble Sort" << endl;
	GenerateArray(A);
	PrintArray(A);
	bubbleSort(A);
	PrintArray(A);
}