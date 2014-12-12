#include "Programs.h"
#include <malloc.h>
#include <Windows.h>

int programma01(void) // inleiding printf programma 1
{
	int n = 3, k = 7; // zet 3 en 7 in de variabele n en k
	printf("Programma met twee getallen n en k.\n"); // print adsklfjaslkdfjaklsdjhfakljs. en \n zorgt ervoor dat het programme een regel verder gaat
	printf("%d\n", k); // zet het getal dat in de variabele k zit op het scherm en drukt op enter
	printf("%d\n", -k); //zet het getal dat in de variabele k zit op het scherm met een min en drukt op enter
	printf("%d\n", n + k + 1); // telt de variabele n en k op, plus 1 het totaal print hij
	printf("%d\n", n); // zet de variabele n op het scherm en entert
	printf("%d\n", k); // zet de variabele k op het scherm en entert
	printf("%d-%d\n", n, k); // zet de 2 variabele op het scherm met een - ertussen en entert
	printf("%d\n\n", n); // zet enter en zet de variabele n op het schem
	printf(" %d\n\n", n); 	//zet variabele n op het scherm en entert
	printf(" n\n");        //zet n op het scherm
	printf("n * n =");     //zet “n*n= “op het scherm
	printf("%d\n", n * n);	 // rekent n*n en daarvan de uitkomst op het scherm


	return 0;
}

int programma02(void)
{
	
	int i;
	//i = (int *)malloc(sizeof(int));
	/*for (i = 51; i < 280; i++ - 3) {
		printf("\n%d", &*i);
	}*/
	for (i = 51; i < 280;  i++)
	{
		if (i % 11 == 0)
		{
			printf("\n%d",i);
		}
		Sleep(50);
	}
	return 0;
}

int Week1P2(void) //af
{
	printf("Naam:\t\t\tMarinus Leeuwerik\n");
	printf("Studentnummer:\t\t254394\n");
	printf("Groep:\t\t\tTEP1A\n");

	system("pause");
	return 0;
}

int Week1P3(void) //af
{
	int n = 3, k = 7;
	printf("Programma met twee getallen n en k.\n");//Regel 1
	printf("%d\n", k);								//Regel 2
	printf("%d\n", -k);								//Regel 3
	printf("%d\n", n);								//Regel 4
	printf("%d\n", n + k + 1);						//Regel 5
	printf("%d\n", n);								//Regel 6
	printf("%d\n", k);								//Regel 7
	printf("%d-%d\n", n, k);						//Regel 8
	printf("%d\n\n", n);							//Regel 9
	printf(" %d\n", n);								//Regel 10
	printf(" n\n");									//Regel 11
	printf("\n\n");									//Regel 12
	printf(" n * n = "); //let op!					//Regel 13	
	printf("%d\n", n * n);							//Regel 14

	system("pause");
	return 0;
}

int Week1P4(void) //af
{
	int n = 2, k = 3;
	printf("Programma met twee getallen n en k.\n");//Regel 1
	printf("%d, %d\n", k, n);						//Regel 2
	printf("%d\n", k);								//Regel 3
	printf("k n\n");								//Regel 4
	printf("(n+k) * (n-k) = ");						//Regel 5
	printf("%d\n", (n + k) * (n - k));				//Regel 6
	printf("(n*n) + (k*k) = ");						//Regel 7
	printf("%d\n", (n*n) + (k*k));					//Regel 8
	printf("%d\n", n++);							//Regel 9
	printf("%d\n", n);								//Regel 10
	printf("%d\n", ++n);							//Regel 11
	printf("%d\n", n);								//Regel 12

	system("pause");
	return 0;
}

int Week2P1(void) //af
{
	int nValue;
	double dValue;
	// calculate the average of 2, 1 and 2; type = double
	dValue = (2.0 + 1.0 + 2.0) / 3.0;
	printf("%f\n", dValue);
	dValue = 2.0 / 3.0 + 1.0 / 3.0 + 2.0 / 3.0;
	printf("%f\n", dValue);

	// calculate the average of 2, 1 and 2; type = integer
	nValue = (2 + 1 + 2) / 3;
	printf("%d\n", nValue);
	nValue = 2 / 3 + 1 / 3 + 2 / 3;
	printf("%d\n", nValue);
	system("pause");
	return 0;
}

int Week2P2(void) //af
{
	// C knows many types of variables
	int nVariable;
	unsigned int unVariable;
	long lVariable;
	unsigned long ulVariable;
	double dVariable;
	char cVariable;
	printf("Enter an integer: ");
	scanf("%d", &nVariable);
	printf("Enter an unsigned integer: ");
	scanf("%d", &unVariable);
	printf("Enter long (integer): ");
	scanf("%d", &lVariable);
	printf("Enter an unsigned long (integer): ");
	scanf("%d", &ulVariable);
	printf("Enter a double: ");
	scanf("%lf", &dVariable);
	printf("Enter a character: ");
	scanf("%c", &cVariable);
	printf("Enter a character: ");
	scanf(" %c", &cVariable); // let op het verschil met de vorige scanf("%c"....
	printf("You entered the following variables:\n");
	printf("nVariable: %d, unVariable: %ud, lVariable:%ld\n", nVariable, unVariable, lVariable);
	printf("ulVariable: %ul, dVariable: %f, cVariable:%c\n", ulVariable, dVariable, cVariable);

	system("pause");
	return 0;
}

int Week2P3(void) //af
{
	int count;
	count = 7; // count will have the value 7
	printf("count=", count);
	count = 8; // count will have the value 8
	count = 9; // and now count will have the value 9
	scanf("%d", &count);
	printf("count = %d\n", count);
	count = count + 5; // add 5 to count
	count = 3; count = 6 + count; count = 5 * count;
	printf("%d\n", count);
	return 0;

}

int Week2P4(void) //af
{
	int celsius = 0;
	double fahrenheit = 0;

	printf("Voer de temperatuur in graden celsius in: \n");
	scanf("%d", &celsius);

	fahrenheit = 1.8 * celsius + 32;

	printf("\nDe temperatuur in graden fahrenheit is: %lf\n", fahrenheit);
	system("pause");
	return 0;
}

int Week3P1(void) //af
{
	int leeftijd;
	long inkomen;
	double knapheid;

	printf("Wat is je leeftijd?\n");
	scanf("%d", &leeftijd);

	if (leeftijd < 25)
	{
		printf("Je volpdoet niet aan de eisen! Zoek een ander!\n");
		system("pause");
		exit(0);
	}
	else if (leeftijd > 39)
	{
		printf("Je voldoet niet aan de eisen! Zoek een ander!\n");
		system("pause");
		exit(0);
	}
	else if (leeftijd > 25 && leeftijd < 40)
	{
		printf("Wat is je inkomen per jaar? (Heel getal)\n");
		scanf("%ld", &inkomen);
		if (inkomen > 50000)
		{
			printf("Je maakt een kans!\n");
			system("pause");
			exit(0);
		}
		else if (inkomen < 50000)
		{
			printf("Laatste kans.. \n");
			printf("Ben je knap? (Schaal van 1 tot 10)\n");
			scanf("%lf", &knapheid);
			if (knapheid >= 8.5) {
				printf("Je maakt toch nog een kans!\n");
				system("pause");
				exit(0);
			}
			else if (knapheid < 8.5) {
				printf("Jammer joh, zoek een ander!\n");
				system("pause");
				exit(0);
			}
		}
	}
}

int Week3P2(void)
{
	int getal = 0;
	printf("Hallo, voer een heel getal in: \n");
	scanf("%d", &getal);
	if (getal >= 15 && getal <= 23) {
		printf("Dit getal ligt WEL tussen 15 en 23!\n");
	}
	else {
		printf("Dit getal ligt NIET tussen 15 en 23!\n");
	}

	system("pause");
	return 0;
}

int Week3P3(void)
{
	int var1, var2, var3, var4;
	var1 = 7;
	var2 = 8;
	printf("var1 = %d\tvar2 = %d\n", var1, var2);
	var1 += 2;
	var2 *= 3;
	printf("var1 = %d\tvar2 = %d\n", var1, var2);
	var3 = 17 % 6;
	var4 = 17 / 6;
	printf("var3 = %d\tvar4 = %d\n", var3, var4);
	var3 -= 14;
	var4 /= 2;
	printf("var3 = %d\tvar4 = %d\n", var3, var4);
	var1 = var2 = 12;
	var3 = (var1--) + (--var2);
	var4 = (++var1) + (var2++);
	printf("var3 = %d\tvar4 = %d\n", var3, var4);

	system("pause");
	return 0;
}

int Week3P4(void)
{
	int F;

	printf("Waar of Niet Waar\n");
	printf("	a		b	| a and b\n");
	printf("-------------------------\n");
	F = 0 && 0;
	printf("	0		0	| %d\n", F);
	F = 0 && 1;
	printf("	0		1	| %d\n", F);
	F = 1 && 0;
	printf("	1		0	| %d\n", F);
	F = 1 && 1;
	printf("	1		1	| %d\n", F);
	printf("\n	a		b	| a or b\n");
	printf("-------------------------\n");
	F = 0 || 0;
	printf("	0		0	| %d\n", F);
	F = 0 || 1;
	printf("	0		1	| %d\n", F);
	F = 1 || 0;
	printf("	1		0	| %d\n", F);
	F = 1 || 1;
	printf("	1		1	| %d\n", F);
	printf("\n	a		b	| a exor b\n");
	printf("-------------------------\n");
	F = 0 ^ 0;
	printf("	0		0	| %d\n", F);
	F = 0 ^ 1;
	printf("	0		1	| %d\n", F);
	F = 1 ^ 0;
	printf("	1		0	| %d\n", F);
	F = 1 ^ 1;
	printf("	1		1	| %d\n", F);
	return 0;
}

int Week3P5(void)
{
	int temp = 0;
	printf("Voor een temperatuur in, in graden celsius: \n");
	scanf("%d", &temp);
	if (temp < 10) 
	{
		printf("\nHet is koud!\n");
	}
	else if (temp >= 10 && temp <= 17)
	{
		printf("\nHet is kil!\n");
	}
	else if (temp >= 17 && temp <= 25)
	{
		printf("\nHet is Ok!\n");
	}
	else if (temp >= 25 && temp <= 32)
	{
		printf("\nHet is warm!\n");
	}
	else if (temp > 32)
	{
		printf("\nHet is heet!\n");
	}
	else
	{
		printf("\nOngeldig!\n");
	}
	return 0;
}

int Week4P1(void)
{

	int i;
	for (i = 51; i < 280; i++)
	{
		if (i % 11 == 0)
		{
			printf("\n%d", i);
		}
		Sleep(50);
	}
	return 0;
}

int Week4P2(void)
{
	int i;
	for (i = 99; i > 0; i--)
	{
		
		printf("%d mandarijnen op de schaal,\n", i);
		printf("Haal er eentje af en eet hem op,\n");
		printf("%d mandarijnen op de schaal.\n\n", i - 1);
	}
	return 0;
}

int Week4P3(void)
{

}