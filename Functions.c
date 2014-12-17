#include "Functions.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>

bool Authorize()
{
	bool auth;
	char pass[80] = "320934";
	char input[80];

	printf("Hallo, voer het wachtwoord in: \n");
	scanf("%s", input);

	if (strcmp(pass, input) == 0)
	{
		printf("GOED");
		system("Color AF");
		Sleep(750);
		system("Color 0F");
		
		return auth = true;
	}
	else
	{
		printf("NIET GOED");
		system("Color CF");
		Sleep(750);
		system("Color 0F");
		return auth = false;
	}
	return auth;
}

int Randomize(int min, int max)
{
	static int t = 0;
	int random;

	if (t == 0)
	{
		srand(time(NULL));
		t = 1;
	}
	random = (rand() % (max - min + 1) + min);

	return random;
}

int Menu()
{
	int s;

	printf("================================================================================\n");
	printf("                                       ICP12                                   \n");
	printf("                                  Marinus Leeuwerik                             \n");
	printf("================================================================================\n");

	printf("Kies hieronder de week waar U de opdrachten van wil zien: \n");
	printf("\tWeek 1\t\t\tWeek 2\n");
	printf("\tWeek 3\t\t\tWeek 4\n");
	
	system("pause");
	return s;
}

double SurfaceBeam(double l, double w, double h) 
{
	return ((2 * (l*h)) + (2 * (w*h)) + (2 * (w*l)));
}

double VolumeBeam(double l, double w, double h)
{
	return l*w*h;
}

double VolumePiramid(double l, double w, double h)
{
	return ((1 / 3)*(l*w)*h);
}