#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>

/*
=================================ZADANIE 55===============================
int main() {
	int liczba = INT_MAX;
	int min = INT_MAX;
	int i = 1;
	printf("Czesc! Ponizszy program wypisuje najmniejsza z podanych przez uzytkownika liczb!\nPodanie 0 skonczy wprowadzanie danych.\n\n");
	while (liczba != 0){
		printf("Podaj %d. liczbe:", i);
		while (scanf_s("%d", &liczba) != 1 || liczba < 0 || getchar() != '\n') {
			printf("Podaj liczbe naturalna lub 0 aby zakonczyc podawanie danych: ");
			char znak = getchar();
			while (znak != '\n')
				znak = getchar();
		}
		if (liczba < min && liczba != 0) min = liczba;
		i++;
	}
	printf("\nNajmniejsza z wprowadzonych liczb to: %d", min);
	printf("\n\nDziekuje za skorzystanie z programu! Przygotowanie: Bartosz Krassowski\n");
	return 0;
}
*/

/*
=================================ZADANIE 56===============================
int main() {
	float liczba = 0;
	float suma = 0;
	float srednia;
	int i = 1;
	printf("Czesc! Ponizszy program wypisuje srednia z 10 podanych przez uzytkownika liczb!\n\n");
	while (i <= 10) {
		printf("Podaj %d. liczbe:", i);
		while (scanf_s("%f", &liczba) != 1 || getchar() != '\n') {
			printf("Podaj liczbe zmiennopozycyjna: ");
			char znak = getchar();
			while (znak != '\n')
				znak = getchar();
		}
		suma = suma + liczba;
		i++;
	}
	srednia = suma / 10;
	printf("\nSrednia z wprowadzonych liczb to: %lf", srednia);
	printf("\n\nDziekuje za skorzystanie z programu! Przygotowanie: Bartosz Krassowski\n");
	return 0;
}
*/

/*
=================================ZADANIE 57===============================
int main() {
	int liczba = 1;
	float suma = 0;
	float iloczyn = 1;
	float srednia;
	double sredniageo;
	float n;
	int i = 1;
	float j;
	printf("Czesc! Ponizszy program wypisuje srednia arytmetyczna i geometryczna podanych przez uzytkownika liczb calkowitych dodatnich!\nPodanie 0 skonczy wprowadzanie danych.\n\n");
	while (liczba != 0) {
		printf("Podaj %d. liczbe:", i);
		while (scanf_s("%d", &liczba) != 1 || liczba < 0 || getchar() != '\n') {
			printf("Podaj liczbe naturalna lub 0 aby zakonczyc podawanie danych: ");
			char znak = getchar();
			while (znak != '\n')
				znak = getchar();
		}
		suma = suma + liczba;
		iloczyn = iloczyn * liczba;
		i++;
	}
	j = i - 1;
	srednia = suma / j;
	n = 1 / j;
	sredniageo = pow(iloczyn, n);
	printf("\nSrednia arytmetyczna podanych liczb to: %f", srednia);
	printf("\nSrednia geometryczna podanych liczb to: %f", sredniageo);
	printf("\n\nDziekuje za skorzystanie z programu! Przygotowanie: Bartosz Krassowski\n");
	return 0;
}
*/

/*
=================================ZADANIE 58===============================
int main()
{
	printf("Ponizszy program pozwala wczytac liczbe w formacie dwojkowym i przedstawic ja w formie dziesietnej.\n");
	printf("\nPodaj ciag zer i jedynek (nie wiecej jak 32 znaki): ");
	char znak;
	int i = 1;
	unsigned long liczba = 0;
	while (i <= 32 && (znak = getchar()) != '\n') {
		if (znak != '0' && znak != '1') {
			printf("Mozna wprowadzac tylko zera lub jedynki\n");
			printf("Koniec programu!!!");
			return 0;
		}
		liczba = liczba * 2 + (znak - '0');
		i++;
	}
	if (i <= 32) printf("Wpisano %lu", liczba);
	else printf("Wpisano zbyt wiele cyfr.");
	printf("\n\nDziekuje za skorzystanie z programu! Przygotowanie: Bartosz Krassowski\n");
	return 0;
}
*/

/*
=================================ZADANIE 59===============================
int main()
{
	int wybor;
	int i = 1;
	float x = 0, y = 0;
	printf("Przedstawiam Panstwu kalkulator HyperCalc 2.0. \n\n");
	printf("0. WYJSCIE\n");
	printf("1. PODAJ LICZBY\n");
	printf("2. DODAWANIE\n");
	printf("3. ODEJMOWANIE\n");
	printf("4. MNOZENIE\n");
	printf("5. DZIELENIE\n");

	while (i != 0) {
		printf("\nWybierz (0-5): ");
		while (scanf_s("%d", &wybor) != 1 || wybor > 5 || wybor < 0 || getchar() != '\n') {
			printf("Uwaga! Wcisnij klawisz (1-5): ");
			char znak = getchar();
			while (znak != '\n')
				znak = getchar();
		}
		switch (wybor) {
		case 0:
			i = 0;
			break;
		case 1:
			printf("\nPodaj pierwsza liczbe: ");
			while (scanf_s("%f", &x) != 1 || getchar() != '\n') {
				printf("Uwaga! Podaj poprawna liczbe: ");
				char znak = getchar();
				while (znak != '\n')
					znak = getchar();
			}
			printf("Podaj druga liczbe: ");
			while (scanf_s("%f", &y) != 1 || getchar() != '\n') {
				printf("Uwaga! Podaj poprawna liczbe: ");
				char znak = getchar();
				while (znak != '\n')
					znak = getchar();
			}
			i = 1;
			break;
		case 2:
			printf("Suma liczb %g i %g to %g\n", x, y, x + y);
			i = 1;
			break;
		case 3:
			printf("Roznica liczba %g i %g to %g\n", x, y, x - y);
			i = 1;
			break;
		case 4:
			printf("Iloczyn liczb %g i %g to %g\n", x, y, x * y);
			i = 1;
			break;
		case 5:
			if (y == 0) {
				printf("Sieroto, nie dzieli sie przez zero!!!\n");
			}
			else {
				printf("Iloraz liczb %g i %g to %g\n", x, y, x / y);
				i = 1;
				break;
			}
		}
	}
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/

/*
=================================ZADANIE 60===============================
int main()
{
	int wybor, wybor2;
	int i = 1;
	float a, b, c, h, pole, p;
	double st, rad;
	printf("Ponizszy program pozwala obliczyc pole dowolnego trojkata roznymi metodami.");
	while (i == 1) {
		printf("\n\n1. PODSTAWA I WYSOKOSC\n");
		printf("2. DWA BOKI I KAT\n");
		printf("3. TRZY BOKI\n");
		printf("4. KONIEC\n");
		printf("\nW celu wyboru interesujacego Cie dzialania wybierz (1-4): ");
		while (scanf_s("%d", &wybor) != 1 || wybor > 4 || wybor < 1 || getchar() != '\n') {
			printf("Uwaga! Wcisnij klawisz (1-4): ");
			char znak = getchar();
			while (znak != '\n')
				znak = getchar();
		}
		printf("\n");
		switch (wybor) {
		case 1:
			printf("Podaj dlugosc podstawy trojkata: a=");
			while (scanf_s("%f", &a) != 1 || a <= 0 || getchar() != '\n') {
				printf("Niepoprawna wartosc! Podaj ponownie: a=");
				char znak = getchar();
				while (znak != '\n')
					znak = getchar();
			}
			printf("Podaj dlugosc wysokosci trojkata: h=");
			while (scanf_s("%f", &h) != 1 || h <= 0 || getchar() != '\n') {
				printf("Niepoprawna wartosc! Podaj ponownie: h=");
				char znak = getchar();
				while (znak != '\n')
					znak = getchar();
				i = 1;
			}
			pole = a * h / 2;
			printf("\nPole trojkata o podstawie dlugosci %f oraz wysokosci %f ma pole rowne %f", a, h, pole);
			i = 1;
			break;
		case 2:
			printf("Podaj dlugosc pierwszego boku: a=");
			while (scanf_s("%f", &a) != 1 || a <= 0 || getchar() != '\n') {
				printf("Niepoprawna wartosc! Podaj ponownie: a=");
				char znak = getchar();
				while (znak != '\n')
					znak = getchar();
			}
			printf("Podaj dlugosc drugiego boku: b=");
			while (scanf_s("%f", &b) != 1 || b <= 0 || getchar() != '\n') {
				printf("Niepoprawna wartosc! Podaj ponownie: b=");
				char znak = getchar();
				while (znak != '\n')
					znak = getchar();
			}
			printf("\nCzy wartosc kata chcesz podac w stopniach czy radianach?\n");
			printf("1. STOPNIACH\n");
			printf("2. RADIANACH\n");
			printf("\nWybierz (1-2): ");
			while (scanf_s("%d", &wybor2) != 1 || wybor > 2 || wybor < 1 || getchar() != '\n') {
				printf("Uwaga! Wcisnij klawisz (1-4): ");
				char znak = getchar();
				while (znak != '\n')
					znak = getchar();
			}
			switch (wybor2) {
			case 1:
				printf("Podaj wartosc kata w stopniach: ");
				while (scanf_s("%lf", &st) != 1 || st <= 0 || st >= 180 || getchar() != '\n') {
					printf("Nie istnieje trojkat z takim katem wewnetrznym! Podaj kat z zakresu (0-180): ");
					char znak = getchar();
					while (znak != '\n')
						znak = getchar();
				}
				rad = st * 2 * 3.14 / 360;
				pole = a * b * sin(rad) / 2;
				printf("Pole trojkata o bokach dlugosci %f i %f oraz katem miedzy nimi rownym %lf stopni jest rowne %f", a, b, st, pole);
				break;
			case 2:
				printf("Podaj wartosc kata w radianach: ");
				while (scanf_s("%lf", &rad) != 1 || rad <= 0 || rad >= 3.14 || getchar() != '\n') {
					printf("Nie istnieje trojkat z takim katem wewnetrznym! Podaj kat z zakresu (0-3,14): ");
					char znak = getchar();
					while (znak != '\n')
						znak = getchar();
				}
				pole = a * b * sin(rad) / 2;
				printf("Pole trojkata o bokach dlugosci %f i %f oraz katem miedzy nimi rownym %lf radianow jest rowne %f", a, b, rad, pole);
				break;
			}
			i = 1;
			break;
		case 3:
			printf("Podaj dlugosc pierwszego boku: a=");
			while (scanf_s("%f", &a) != 1 || a <= 0 || getchar() != '\n') {
				printf("Niepoprawna wartosc! Podaj ponownie: a=");
				char znak = getchar();
				while (znak != '\n')
					znak = getchar();
			}
			printf("Podaj dlugosc drugiego boku: b=");
			while (scanf_s("%f", &b) != 1 || b <= 0 || getchar() != '\n') {
				printf("Niepoprawna wartosc! Podaj ponownie: b=");
				char znak = getchar();
				while (znak != '\n')
					znak = getchar();
			}
			printf("Podaj dlugosc trzeciego boku: c=");
			while (scanf_s("%f", &c) != 1 || c <= 0 || getchar() != '\n') {
				printf("Niepoprawna wartosc! Podaj ponownie: c=");
				char znak = getchar();
				while (znak != '\n')
					znak = getchar();
			}
			if ((a > b && a > c && a >= b + c) || (b > a && b > c && b >= a + c) || (c > a && c > b && c >= a + b)) printf("Nie istnieje trojkat o bokach: %f, %f, %f.", a, b, c);
			else {
				p = 0.5 * (a + b + c);
				pole = sqrt(p * (p - a) * (p - b) * (p - c));
				printf("\nPole trojkata o bokach dlugosci: %f, %f oraz %f ma pole rowne %f", a, b, c, pole);
			}
			i = 1;
			break;
		case 4:
			i = 0;
			break;
		}
	}
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/

