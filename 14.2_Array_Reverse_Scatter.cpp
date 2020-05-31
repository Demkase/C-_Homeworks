// Задача 14.2
// Заповнити масив A випадковими числами.
// Написати процедуру
// void PrintBackwards(int arr[])
// яка виводить елементи масиву у зворотньому порядку. Вивести масив спочатку у прямому, а потім у зворотньому порядку:
// PrintArray(A);
// PrintBackwards(A);
// Наприклад:
// 14   6  -5  -3  -4  -3  14   1   0  15   6  -3  -5
// -5  -3   6  15   0   1  14  -3  -4  -3  -5   6  14
//===================================================
// Задача 14.2.1 (необов'язкова)
// Заповнити масив A випадковими числами.
// Написати процедуру
// void PrintScatter(int arr[])
// яка виводить елементи масиву в порядку:
// перший, останній, другий, передостанній, третій... і т.д. без повторів.
// Наприклад:
//  15  24  -5  12   3  27  11  14  18  21  19  31   7
//  15   7  24  31  -5  19  12  21   3  18  27  14  -5
// Перевірити роботу на масивах з 12 та 13 елементів.
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

const int arraySize = 13;

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
void GenerateTestArray(int arr[])
{
	for (int i = 0; i < arraySize; ++i)
	{
		arr[i] = i + 1;
	}
}

void PrintReverseArray(int arr[])
{
	for(int i = arraySize - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	} 
	cout << ": Reverse" << endl;
}
void PrintScatter(int arr[])
{
	
	for(int i = 0, j = arraySize - 1; i <= j; j-= 1, i+=1)
	{
		cout << arr[i] << " ";
		if(i == j)
		{
			break;
		}
		cout << arr[j] << " ";
	} 
	cout << ": Scatter"  << endl;
}
//Found and print average===========================
void PrintAverageValue(int arr[])
// double GetAverageValue(int arr[])
{
	double average = arr[0];
	int i;
	for (i = 1; i < arraySize; ++i)
	{
		average += arr[i];
	}
	average /= arraySize;
	cout << "Average Value: " << average << endl;
	// return average;
}

int main()
{
	srand(time(0));
	int A[arraySize];
	GenerateArray(A);
	// GenerateTestArray(A);
	PrintArray(A);
	PrintReverseArray(A);
	GenerateTestArray(A);
	PrintArray(A);
	PrintScatter(A);
}