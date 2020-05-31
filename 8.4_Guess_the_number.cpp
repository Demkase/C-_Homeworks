// Задача 8.4
// Гра "Вгадайка+".
// Комп'ютер загадує число від 0 до 100.
// Користувач вводить число доки не вгадає.
// Кожен раз коли користувач не вгадує, комп'ютер підказує:
// “ваше число більше загаданого” чи “ваше число менше загаданого”
// Наприклад:
// 17
// My number is bigger
// 30
// My number is lower
// 25
// My number is lower
// 22
// Correct!
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
	srand(time(0));

	int MyNumber, YourNumber;
	cout << "Guess a number between (0 - 100): ";
	cin >> YourNumber;
	
	MyNumber = rand() % 101;

	while (YourNumber != MyNumber)
	{
		if (YourNumber > MyNumber)
		{
			cout << "My number is lower " << endl; 
		}
		else
		{
			cout << "My number is bigger " << endl; 
		}
		cin >> YourNumber;
	}
	cout << "Correct: "<< MyNumber << endl;
	return 0;
}