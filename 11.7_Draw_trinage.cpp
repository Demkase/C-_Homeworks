// Задача 11.7 (необов’язкова, потребує знань геометрії)
// Написати програму, яка малює рівносторонній трикутник (з точністю до одного пікселя)

// Задача 11.2
// Написати процедуру DrawTriangle() з двома параметрами, яка малює трикутник за заданими координатами.
// void DrawTriangle(int x, int y)

// Потім з її допомогою намалювати 4 трикутники:
// DrawTriangle(50, 70);
// DrawTriangle(520, 110);
// DrawTriangle(360, 505);DrawTriangle(170, 420);
//==============================================================
#include <conio.h>
#include <stdio.h>
#include <cmath>
#include "glfwbgi.h"
#include <iostream>

using namespace Graph;
using namespace std;

void DrawTriangle(int x, int y)
{
	int size = 150;
	double hipotenusa = size/3*2;
	double katetB = size/3;
	double katetA = sqrt((hipotenusa*hipotenusa)-(katetB*katetB));
	
	double A1 = static_cast<double>(x);
	double a1 = static_cast<double>(y) - hipotenusa;
	double B1 = static_cast<double>(x) + katetA;
	double b1 = static_cast<double>(y) + katetB;
	double c1 = static_cast<double>(y) + katetB;
	double C1 = static_cast<double>(x) - katetA;
	
	DrawLine(A1, a1, B1, b1, Color::Red);
	DrawLine(A1, a1, C1, c1, Color::Green);
	DrawLine(B1, b1, C1, c1, Color::Blue);
}

int main()
{
	int x, y;

	printf("X: Y: ");
	std:cin >> x >> y;
	
	if (!Graph::InitGraph(800, 600, "Triangle"))
	{
		printf("oops");
		return 0;
	}
	DrawTriangle(x, y);
	DrawTriangle(50, 70);
	DrawTriangle(520, 110);
	DrawTriangle(360, 505);
	DrawTriangle(170, 420);

	SwapBuffers();
	while (! Graph::IsKeyPressed(Graph::VK_Q))
	{
		Graph::Delay(10);
		if (Graph::ShouldClose())
		break;
	}
	Graph::CloseGraph();
	return 0;
}