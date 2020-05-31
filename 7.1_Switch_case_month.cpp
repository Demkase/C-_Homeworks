// Задача 7.1
// Напишіть функцію, яка приймає один параметр: номер місяця і повертає його назву.
// (тип параметру: int, тип результату: std::string)
// якщо введено неіснуючий місяць - повернути “неправильно”#include <iostream>

#include <string>
using namespace std;

string Calendar (int month)
{
	switch (month)
	{
	case 1:
		return "January";
	case 2:
		return "February";
	case 3:
		return "March";
	case 4:
		return "April";
	case 5:
		return "May";
	case 6:
		return "June";
	case 7:
		return "July";
	case 8:
		return "August";
	case 9:
		return "September";
	case 10:
		return "October";
	case 11:
		return "November";
	case 12:
		return "December";
	default:
		return "Invalid month";	
	}
}
int main()
{
	int month_input;
	printf("Number of mounth: ", month_input);
	scanf("%d", &month_input);

	cout << Calendar(month_input) << endl;
}