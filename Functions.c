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