#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

/*
========================ZADANIE 62=========================
enum {false, true};

int main()
{
	printf("Program polega na sprawdzeniu poprawnosci wpisanego przez uzytkownika imienia.");
	_Bool udalo_sie = false;
	while (!udalo_sie) {
		char znak;
		udalo_sie = true;
		printf("\n\nPodaj imie: ");
		znak = getchar();
		if (!isupper(znak)) {
			if (!isalpha(znak)) {
				printf("Imie sklada sie tylko z liter!!");
			}
			else {
				printf("Imie nalzezy rozpoczac od wielkiej litery!!");
			}
			udalo_sie = false;
			while (znak != '\n') {
				znak = getchar();
			}
			continue;
		}
		printf("\nMasz na imie %c", znak);

		while ((znak = getchar()) != '\n') {
			if (!islower(znak)) {
				if (!isalpha(znak)) {
					printf("...?");
					printf("\nImie sklada sie tylko z liter!!");
				}
				else {
					printf("...?");
					printf("\nJedynie pierwsza litera imienia moze byc wielka!!");
				}
				udalo_sie = false;
				while (znak != '\n') {
					znak = getchar();
				}
				continue;
			}
		printf("%c", znak);
		}

		
	}
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/

/*
========================ZADANIE 63=========================
#define POCZ 0.0
#define KON 0.125
#define ILE 33

int main() {
	double krok = (KON - POCZ) / (ILE - 1);//odl. miedzy pkt.
	printf("Program oblicza bledy przyblizenia");
	printf(" funkcji sin(x) przez x\ndla %d", ILE);
	printf(" rownoodleglych punktow z przedzial");
	printf("u [%.g,%g].\n\n%-14s", POCZ, KON, "x");
	printf("%-13s%-12s", "sin(x)", "x-sin(x)");
	printf("%-12s\n", "|(x-sin(x))/x|");
	for (int i = 0; i <= ILE; i++) {
		double x = POCZ + i * krok;
		double sin_x = sin(x);
		double bl_b = x - sin_x;
		double bl_w = x != 0.0 ? fabs(bl_b / x) : -1.0;
		printf("\n%11.9f%14.9f%12.3e", x, sin_x, bl_b);
		if (bl_w!= -1.0)
			printf("%12.3e", bl_w);
	}
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/

/*
========================ZADANIE 64=========================
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>
int main() {
	int a;
		for (int i = 0; i < 10; i++) {
			a = INT_MAX - 5 + i;
			printf("%d. %d\n", i + 1, a);
		}
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/

/*
========================ZADANIE 65=========================
int main() {
	int ile;
	double wynik = 1;
	printf("Ponizszy program wypisze n poteg dwojki. Podaj n: ");
	while (scanf_s("%d", &ile) != 1 || getchar() != '\n') {
		printf("Podaj liczbe naturalna: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	for (int i = 1; i <= ile; i++) {
		wynik = wynik * 2;
		printf("%d. %g\n", i, wynik);
	}
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/

/*
========================ZADANIE 66=========================
int main() {
	float liczba = 0;
	float suma = 0;
	float srednia;
	printf("Czesc! Ponizszy program wypisuje srednia z 10 podanych przez uzytkownika liczb!\n\n");
	for (int i = 1; i <= 10; i++) {
		printf("Podaj %d. liczbe: ", i);
		while (scanf_s("%f", &liczba) != 1 || getchar() != '\n') {
			printf("Podaj liczbe zmiennopozycyjna: ");
			char znak = getchar();
			while (znak != '\n')
				znak = getchar();
		}
		suma = suma + liczba;
	}
	srednia = suma / 10;
	printf("\nSrednia z wprowadzonych liczb to: %g", srednia);
	printf("\n\nDziekuje za skorzystanie z programu! Przygotowanie: Bartosz Krassowski\n");
	return 0;
}
*/