// Задача 19.3 (потрібна для заняття)
// Є таке поняття як "розріджений масив" - це масив у якому більшість значень порожні (0), наприклад:
// 0 4 0 0 0 12 0 7 0 0 5 0 0 0 0 0 1 0 0 0 0 2 0 9 0 0 0
// Написати процедуру для "пакування" такого масиву:
// перенесіть всі ненульові значення ліворуч (починаючи з індекса 0) при цьому не порушуючи порядок.
// Наприклад:
// було:
// 0 4 0 0 0 12 0 7 0 0 5 0 0 0 0 0 1 0 0 0 0 2 0 9 0 0 0
// стало:
// 4 12 7 5 1 2 9 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//=================================================================
#include "glfwbgi.h"
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;
using namespace Graph;

// const int arraySize = 27;
const int arraySize = 9;

// int test[] = {0,4,0,0,0,12,0,7,0,0,5,0,0,0,0,0,1,0,0,0,0,2,0,9,0,0,0};
// int test[] = {2,4,2,8,2,4,2,8,4};
int test[] = {0,4,2,0,4,0,2,2,2};

//Random array===============================
void GenerateArray(int arr[])
{
	for (int i = 0; i < arraySize; ++i)
	{
		arr[i] = rand() % 10;
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
// void swapZeroRight(int arr[])
// {
// 	int swaps = 0;
// 	for(int i = 1, j = 0; i < arraySize; i++)
// 	{
// 		if(arr[j] > 0)
// 		{
// 			j++;
// 			continue;
// 		}
// 		if(arr[i] > 0)
// 		{
// 			int swap = arr[i];
// 			arr[i] = arr[j];
// 			arr[j] = swap;

// 			cout << i << "<->" << j << " (" << arr[i] << "<->" << arr[j] << ")" << endl;
// 			++swaps;
// 			j++;
// 		}
// 	}
// 	cout << "Total swaps: "  << swaps << endl;
// }
// void gameFunc(int arr[])
// {
// 	for (int i = 0; i < arraySize-1; ++i)
// 	{
// 		if(arr[i] == arr[i+1])
// 		{
// 			arr[i] += arr[i+1];
// 			arr[i+1] = 0;
// 			i++;
// 		}
// 	}
// }
void leftPack(int arr[])
{
	int place = 0;
	for (int i = 0; i < arraySize; ++i)
	{
		if(arr[i] != 0)
		{
			if(i == place)
			{
				continue;
			}

			if((arr[i] != arr[place])&&(arr[place] != 0))
			{
				place++;
				if(i == place)
				{
					continue;
				}
			}
			if((arr[i] != arr[place])&&(arr[place] == 0))
			{
				arr[place] += arr[i];
				arr[i] = 0;
			}
		
			if(arr[place] == arr[i])
			{
				arr[place] += arr[i];
				arr[i] = 0;
				place++;
			}
		}	
		else if(arr[place] == 0)
		{
			if(i == place)
			{
				continue;
			}
			if(arr[i] != arr[place])
			{
				arr[place] += arr[i];
				arr[i] = 0;
			}
		}	
	}	
}
int main()
{
	srand(time(0));	
	int A[arraySize];
	// GenerateArray(A);
	// PrintArray(A);
	// swapZeroRight(A);
	// PrintArray(A);
	// GenerateTestArray(A);
	// cout << endl;
	PrintArray(test);
	leftPack(test);
	// swapZeroRight(test);
	PrintArray(test);
	// gameFunc(test);
	// PrintArray(test);
	// swapZeroRight(test);
	// PrintArray(test);
	
}