// Задача 11.4
// Написати програму, яка малює сходинки.
// Не менше 10 сходинок. висота сходинки - 17 пікселей, ширина - 24 пікселя.
// (теж потрібен цикл)
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include "glfwbgi.h"

using namespace Graph;
using namespace std;
int main()
{
	int x, y, count;
	cout << "Give me point: (x, y)" << endl;
	cin >> x >> y;
	count = 10;
	while((count <= 0) || (count > 10))
	{
		cout << "Wrong count!" << endl;
		cin >> count;
	}
	
	if (!Graph::InitGraph(640, 480, "Stairs"))
	{
		printf("Graphics could not be initialized");
		return 0;
	}

	int x1, x2, y1, y2;
	
	x1 = x; 
	y1 = y; 
	y2 = y;

	for (int i = 0; i < count; i++)
	{
		x2 = x1;
		y2 -= 17;		
		DrawLine(x1, y1, x2, y2, Color:: Gold);// Vertical;
		y1 -= 17;
		x2 = x1 + 24;
		DrawLine(x1, y1, x2, y2, Color:: Green);// Horizontal;
		x1 += 24;
	}
	
	SwapBuffers();
	while (! Graph::IsKeyPressed( Graph::VK_Q))
	{
		Graph::Delay(10);
		if (Graph::ShouldClose())
		break;
	}
	Graph::CloseGraph();
	
	return 0;
}