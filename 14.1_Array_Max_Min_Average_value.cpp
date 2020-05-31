// Задача 14.1
// Заповнити масив A випадковими числами.
// Написати процедури, Які знаходять в ньому:
// - максимальне значення  void PrintMaxValue(int arr[]) (можна використати код з заняття)
// - мінімальне значення void PrintMinValue(int arr[])
// - середнє арифметичне всіх елементів void PrintAverageValue(int arr[])
// PrintArray(A);
// PrintMaxValue(A);
// PrintMinValue(A);
// PrintAverageValue(A);
// Наприклад:
// 14   6  -5  -3  -4  -3  14   1   0  15   6  -3  -5
// Minimum is: -5
// Maximum is: 15
// Average is: 2.54
//=================================
// Задача 14.1.1 (необов'язкова)
// Реалізувати у вигляді функцій, щоб можна було використовувати у так:
// PrintArray(A);
// cout << "Maximum is: " << GetMaxValue(A) << endl;
// cout << "Minimum is: " << GetMinValue(A) << endl;
// cout << "Average is: " << GetAverageValue(A) << endl;
//==================================
// Задача 14.1.2 (необов'язкова)
// Заповнити масив A випадковими числами.
// Написати одну процедуру
// void PrintStatistics(int arr[])
// яка знаходить в ньому:
// - максимальне значення
// - мінімальне значення
// - середнє значення
// і зовсім необов'язково (для тих хто розбирається у статистиці):
// - середньоквадратичне відхилення
// - дисперсію
// А потім виводить всі значення на екран.
//==================================
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

const int arraySize = 15;

void generateArray(int arr[])
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
	cout << endl;
}

// void PrintMinValue(int arr[])
int GetMinValue(int arr[])
{
	int minVal = arr[0];
	for(int i = 1; i < arraySize; ++i)
	{
		if(minVal > arr[i])
		{
			minVal = arr[i];
		}
	}
	// cout << "Min Value: " << minVal << endl;
	return minVal;
}

// void PrintMaxValue(int arr[])
int GetMaxValue(int arr[])
{
	int maxVal = arr[0];
	for(int i = 1; i < arraySize; ++i)
	{
		if(maxVal < arr[i])
		{
			maxVal = arr[i];
		}
	}
	// cout << "Max Value: " << maxVal << endl;
	return maxVal;
}

// void PrintAverageValue(int arr[])
double GetAverageValue(int arr[])
{
	double average = arr[0];
	int i;
	for (i = 1; i < arraySize; ++i)
	{
		average += arr[i];
	}
	average /= arraySize;
	// cout << "Average Value: " << average << endl;
	return average;
}

void PrintStatistics(int arr[])
{

//==============================
	int maxVal = arr[0];
	for(int i = 1; i < arraySize; ++i)
	{
		if(maxVal < arr[i])
		{
			maxVal = arr[i];
		}
	}
	cout << "Max Value: " << maxVal << endl;
//===============================
	int minVal = arr[0];
	for(int i = 1; i < arraySize; ++i)
	{
		if(minVal > arr[i])
		{
			minVal = arr[i];
		}
	}
	cout << "Min Value: " << minVal << endl;
//==============================
	double average = arr[0];
	int i;
	for (i = 1; i < arraySize; ++i)
	{
		average += arr[i];
	}
	average /= arraySize;
	cout << "Average Value: " << average << endl;
//===============================
	double dis[arraySize];
	double sum = 0;
	
	for(int i = 0; i < arraySize; i++)
	{
		dis[i] = arr[i] - average;
		dis[i] *= dis[i];
		
		sum += dis[i];
	}
	double dispersia = sum / arraySize;
	cout << "Dispersia : " << dispersia << endl; 
	
}
int main()
{
	srand(time(0));
	int A[arraySize];
	generateArray(A);

	PrintArray(A);
	PrintStatistics(A);
	//=== Функция =====
	// cout << "Maximum is: " << GetMaxValue(A) << endl;
	// cout << "Minimum is: " << GetMinValue(A) << endl;
	// cout << "Average is: " << GetAverageValue(A) << endl;
	
	// === Процедури ===
	// PrintMaxValue(A);
	// PrintMinValue(A);
	// PrintAverageValue(A);
}