// Задача 14.3
// Заповнити масив A випадковими числами.
// Написати процедуру void PrintNumberOfEvenValues(int arr[])
// або функцію int GetNumberOfEvenValues(int arr[])
// яка виводить/повертає кількість елементів з парними значеннями.
// Наприклад:
// 14 6 -5 -3 -4 -3 14 1 0 15 6 -3 -5
// Evens: 6
//===================================================
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

const int arraySize = 12;

void GenerateArray(int arr[])
{
	for (int i = 0; i < arraySize; ++i)
	{
		arr[i] = rand() % 10;
	}	
}
void PrintArray(int arr[])
{
	for (int i = 0; i < arraySize; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << ": Array" << endl;
}
void PrintNumberOfEvenValues(int arr[])
{
	int evens = 0;
	for (int i = 0; i < arraySize; i++)
	{
	
		if((arr[i] != 0) && (arr[i] % 2 == 0))
		{
			evens ++;
		}
	}
	cout << "Evens: "<< evens << endl;
}
int GetNumberOfEvenValues(int arr[])
{
	int evens = 0;
	for (int i = 0; i < arraySize; i++)
	{
	
		if((arr[i] != 0) && (arr[i] % 2 == 0))
		{
			evens ++;
		}
	}
	return evens;
}
int main()
{
	srand(time(0));
	int A[arraySize];
	GenerateArray(A);
	PrintArray(A);
	// PrintNumberOfEvenValues(A);
	cout << "Evens: "<< GetNumberOfEvenValues(A) << endl;
}