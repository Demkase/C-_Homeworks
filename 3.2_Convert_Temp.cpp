// Попросити користувача ввести ціле число градусів Цельсія.
// Вивести на екран значення в градусах Фаренгейта та Кельвіна (з точністю до 2 знаків).

#include <stdio.h>

float c, k, f;

int main()
{
	printf ("Enter Celsius degrees:\n", c);
	scanf ("%f", &c);
	k = c + 273.15;
	f = c * 9 / 5 + 32;
	printf ("This is:\n");
	printf ("%.2f F\n", f);
	printf ("%.2f K\n", k);
	
}