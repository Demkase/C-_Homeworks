// Вы стоїте в куті прямокутного спортивного поля. У протилежному куті сидить собака.
// Коли ви кличете собаку, вона починає бігти до вас зі швидкістю 4 м/с.
// Як швидко добіжить до вас собака?
// Попросіть користувача ввести розміри (довжину/ширину) поля у метрах.
// Виведіть на екран через скільки секунд до вас добіжить собака (з точністю до мілісекунди).


#include <stdio.h>
#include <math.h>

float leigth, width, speed, distance;

int main()
{
	printf ("Enter field size:\n");
	scanf ("%f %f", &leigth, &width);

	// uznat gepotenusu a2 + b2 = c2
	distance = (leigth * leigth) + (width * width); 
	
	speed  = 4.0;


	printf("%.2f\n", sqrt(distance));

	printf("Dog time: %.3f s\n", sqrt(distance) / speed);
}