// Задача 8.5 (необов’язкова)
// Попросіть користувача ввести час (години/хвилини/секунди).
// якщо ввів некоректне - попросіть ще раз (і так доки не введе коректне).
// Наприклад:
// Enter correct time:
// 12 78 22
// Enter correct time:
// 25 12 00
// Enter correct time:
// 23 15 78
// Enter correct time:
// 10 40 51
// Good!
#include <iostream>

using namespace std;

int main ()
{
	int hour, minute, second;

	cout << "Enter correct time: \n";
	cin >> hour >> minute >> second;

		while ((hour < 0) 	|| (hour > 23)
		    || (minute < 0) || (minute >59)
		    || (second < 0) || (second > 59))
		{
			cout << "Enter correct time: \n";
			cin >> hour >> minute >> second;
		}
	
	cout << "Good!" << endl;
	return 0;
}