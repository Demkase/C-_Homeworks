// Хлопець стріляє камінням з рогатки. Кожен раз він запускає каміння з різною швидкістю і під різним кутом.
// Треба дізнатися як далеко долетить камінь.
// Попросіть користувача ввести швидкість каміння (м/с) та кут (градуси), виведіть відстань на яку долетить каміння (м).
// опір повітря та вітер можна не враховувати.
#include <stdio.h>
#include <math.h>
#include <iostream>

#define PI 3.14159265
const double g = 9.80665;
using namespace std;

int main ()
{
	double start_speed, angle;
	printf("Rock`s start speed(m/s) and angle(deg): \n", start_speed, angle);
	scanf("%lf  %lf", &start_speed, &angle);
	//=======================================================================
	double alpha = angle * PI/180;
	double ta = (start_speed * sin(alpha))/g;
	double tn = 2*ta;
	double vx = start_speed * cos(alpha);
	double distance = (pow(start_speed,2) * sin(2*alpha))/g;
	double h_max = (pow(start_speed,2) * pow(sin(alpha),2))/(2*g);
	//=======================================================================
	cout << endl;
	printf("Alpha: %.5f rad\n", alpha);
	printf("sin(alpha): %.5f rad\n", sin(alpha));
	printf("cos(alpha): %.5f rad\n", cos(alpha));
	cout << endl;
	printf("ta: %.2f t\n", ta);
	printf("tn: %.2f t\n", tn);
	cout << endl;
	printf("vx: %.2f m/sec\n", vx);	
	cout << endl;
	printf("h_max: %.2f m\n", h_max);
	printf("Distance: %.2f m\n", distance);
	return 0;
}