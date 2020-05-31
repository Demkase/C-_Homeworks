// Задача 11.3
// Написати програму, яка малює 7 паралельних ліній.
// Лінії мають бути нахиленими, тобто не горизонтальними і не вертикальними.
// Так, тут потрібен цикл 
#include <conio.h>
#include <stdio.h>

#include "glfwbgi.h"

using namespace Graph;

int main()
{
	if (!Graph::InitGraph(640, 480, "Triangle"))
	{
		printf("Oops");
		return 0;
	}

	int x1, y1, x2, y2, count;
	x1 = 60;
	y1 = 80;
	x2 = 200;
	y2 = 100;
	for(count = 0, x1, y1, x2, y2; count < 7; count++, x1 += 10, y1 += 10, x2 += 5, y2 += 5)
		{
			DrawLine(x1, y1, x2, y2, Color:: Red);
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