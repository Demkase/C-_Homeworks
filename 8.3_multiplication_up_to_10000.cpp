// Задача 8.3
// Запитати у користувача число.
// Множити його на два, поки воно не стане більше 10000.

#include <iostream>

using namespace std;

int multiplication(int x)
{
	if (x < 0)
		x = abs(x);
	
	while(x < 10000)
	{
		cout << x << endl;
		x = x * 2;

	}
	return x;	
}

int main()
{
	int number;
	//x = 100;
	cout << "Enter number: " << endl;
	cin >> number;
	cout << multiplication(number) << endl;
} 