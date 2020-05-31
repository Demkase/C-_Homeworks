// Задача 8.6 (необов’язкова)
// Написати процедуру, яка для будь якого цілого числа виводить виводить Сіракузьку послідовність починаючи з нього.
// (гугл вам в допомогу :))
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter number: " <<endl;
	cin >> n;
	while (n != 1)
	{
		if (n % 2 != 0)
			{
				n = n * 3 + 1;
				cout << n << endl;
			}
	n = n / 2;
	cout << n << endl;
	}

	return 0;
}