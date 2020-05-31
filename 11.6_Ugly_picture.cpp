// Задача 11.6 (потрібна для наступного заняття!)
// Написати програму, Яка малює наступну картинку.
// Як це робити:
// сонце, крона дерева та озеро - це еліпси (процедура FillEllipseChord)
// кущі - просто лінії (процедура DrawLine)
// шляпка гриба - це сектор еліпсу (процедура FillEllipseSector)
// стовбур дерева, гриба та частини фону це прямокутники (процедура FillRectangle)
// Точне положення та колір не важливі. Підберіть згідно своїх естетичних поглядів :)
#include <conio.h>
#include <stdio.h>

#include <random>
#include <time.h>

#include "glfwbgi.h"

using namespace Graph;

void DrawGrass(int x, int y)
	{
		int x1, y1, x2, y2;

		DrawLine(x, y, x - 10, y - 20, Color:: Green);
		DrawLine(x, y, x - 20, y - 10, Color:: Green);
		DrawLine(x, y, x + 20, y - 10, Color:: Green);
		DrawLine(x, y, x + 15, y - 30, Color:: Green);
	
	}

int main()
{
	int width, height;

	width = 800;
	height = 600;


	if (!Graph::InitGraph(width, height, "Triangle"))
	{
		printf("Graphics could not be initialized");
		return 0;
	}

	//Background:
	ClearDevice(Color:: LightBlue);
	//Ground:
	FillRectangle(0, 220, width, height, Color:: Lime);
	//Grass:
	DrawGrass(50, 350);
	DrawGrass(100, 450);
	DrawGrass(200, 550);
	DrawGrass(250, 350);
	DrawGrass(350, 450);
	//Sun:
	FillEllipseSector(700, 60, 50, 50, 0, 360, Color:: Orange);
	//Tree trunk:
	FillRectangle(520, 200, 540, 400, Color:: Brown);
	//Tree crown:
	FillEllipseSector(475, 150, 50, 50, 0, 360, Color:: Green); //Left
	FillEllipseSector(520, 215, 50, 50, 0, 360, Color:: Green); //Down
	FillEllipseSector(565, 140, 50, 50, 0, 360, Color:: Green); //Right
	FillEllipseSector(520, 75, 50, 50, 0, 360, Color:: Green);  //Up
	//Apples:
	FillEllipseSector(535, 75, 5, 5, 0, 360, Color:: Red);
	FillEllipseSector(510, 125, 5, 5, 0, 360, Color:: Red);
	FillEllipseSector(555, 145, 5, 5, 0, 360, Color:: Red);
	FillEllipseSector(465, 150, 5, 5, 0, 360, Color:: Red);
	FillEllipseSector(515, 190, 5, 5, 0, 360, Color:: Red);
	FillEllipseSector(530, 220, 5, 5, 0, 360, Color:: Red);
	//Lake:
	FillEllipseSector(600, 500, 50, 50, 0, 360, Color:: BondiBlue);
	//Mushroom trunk:
	FillRectangle(400, 380, 410, 410, Color:: DarkBrown);
	//Mushroom head:
	FillEllipseSector(405, 380, 20, 20, 0, 180, Color:: Purple);
	
	//Mushroom trunk:
	FillRectangle(300, 380, 310, 410, Color:: DarkBrown);
	//Mushroom head:
	FillEllipseSector(305, 380, 20, 20, 0, 180, Color:: Purple);
	
	//Mushroom trunk:
	FillRectangle(200, 380, 210, 410, Color:: DarkBrown);
	//Mushroom head:
	FillEllipseSector(205, 380, 20, 20, 0, 180, Color:: Purple);
	
	
	SwapBuffers();
	while (! Graph::IsKeyPressed( Graph::VK_ESCAPE))
	{
		Graph::Delay(10);
		if (Graph::ShouldClose())
		break;
	}
	Graph::CloseGraph();
	
	return 0;
}