#include <stdio.h>
#include <math.h>

int key;

int main()
{
	printf("Wcisnij dowolny klawisz: ");
	key = getchar();
	t=(int)
	if (key == "t") {
		printf("Wcisnieto t\n");
	}
	printf("Wcisnieto inny klawisz");
	return 0;
}


/*
==========================ZADANIE 26====================
float a, b, c, d, e, f;

int main()
{
	printf("Sprawdzmy, czy dany punkt nalezy do kola o srodku w punkcie (0, 0) i promieniu 1. W tym celu: \n\n");
	printf("Podaj piewsza wspolrzedna punktu: ");
	while (scanf_s("%f", &a) != 1 || getchar() != '\n') {
		printf("Niepoprawna wspolrzedna punktu! Podaj ponownie: ");
		char znak = getchar();
		while (znak != '\n')
		znak = getchar();
	}
	printf("\nPodaj druga wspolrzedna punktu: ");
	while (scanf_s("%f", &b) != 1 || getchar() != '\n') {
		printf("Niepoprawna wspolrzedna punktu! Podaj ponownie: ");
		char znak = getchar();
		while (znak != '\n')
		znak = getchar();
	}
	printf("\nPodany punkt ma wspolrzedne (a, b)=(%.3f, %.3f)\n", a, b);
	c = pow(a, 2.0)+ pow(b, 2.0);
	d = pow(c,(1.0 / 2.0));
	if (d <= 1) {
		printf("Podany punkt NALEZY do kola o srodku w punkcie (0, 0) i promieniu 1.");
		e = 3.14 * pow(d, 2.0);
		f = e / 3.14;
		printf("\nOkrag o nalezacy do podanego punktu tworzy kolo o polu %f i stanowi %f pola kola o promieniu 1.\n", e, f);
	}
		else printf("Podany punkt NIE NALEZY do kola o srodku w punkcie (0, 0) i promieniu 1.");
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/

/*
==========================ZADANIE 27====================
float a, b, c, d;

int main()
{
	printf("Sprawdzmy, czy dany punkt nalezy do kola o srodku w punkcie (0, 0) i promieniu 1. W tym celu: \n\n");
	printf("Podaj piewsza wspolrzedna punktu: ");
	while (scanf_s("%f", &a) != 1 || getchar() != '\n') {
		printf("Niepoprawna wspolrzedna punktu! Podaj ponownie: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	printf("\nPodaj druga wspolrzedna punktu: ");
	while (scanf_s("%f", &b) != 1 || getchar() != '\n') {
		printf("Niepoprawna wspolrzedna punktu! Podaj ponownie: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	printf("\nPodany punkt ma wspolrzedne (a, b)=(%.3f, %.3f)\n", a, b);
	c = pow(a, 2.0) + pow(b, 2.0);
	d = pow(c, (1.0 / 2.0));
	if (d < 1) printf("Podany punkt lezy wewnatrz kola o srodku w punkcie (0, 0) i promieniu 1.");
	else if (d == 1) printf("Podany punkt lezy na okregu o srodku w punkcie (0, 0) i promieniu 1.");
	else printf("Podany punkt NIE NALEZY do kola o srodku w punkcie (0, 0) i promieniu 1.");
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/

/*
==========================ZADANIE 28====================
float a, b;

int main()
{
	printf("Sprawdzmy, do ktorej cwiartki karteznajckiego ukladu wspolczednych nalezy podany punkt. W tym celu: \n\n");
	printf("Podaj piewsza wspolrzedna punktu: ");
	while (scanf_s("%f", &a) != 1 || getchar() != '\n') {
		printf("Niepoprawna wspolrzedna punktu! Podaj ponownie: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	printf("\nPodaj druga wspolrzedna punktu: ");
	while (scanf_s("%f", &b) != 1 || getchar() != '\n') {
		printf("Niepoprawna wspolrzedna punktu! Podaj ponownie: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	printf("\nPodany punkt ma wspolrzedne (a, b)=(%.3f, %.3f)\n", a, b);
	if (a == 0 || b == 0) printf("Podany punkt nalezy do osi kartezjanskiego ukladu wspolrzednych.");
	else if (a > 0 && b > 0) printf("Podany punkt Nalezy do pierwszej cwiartki kartezjanskiego ukladu wspolrzednych.");
	else if (a < 0 && b > 0) printf("Podany punkt Nalezy do drugiej cwiartki kartezjanskiego ukladu wspolrzednych.");
	else if (a < 0 && b < 0) printf("Podany punkt Nalezy do trzeciej cwiartki kartezjanskiego ukladu wspolrzednych.");
	else printf("Podany punkt Nalezy do czwartej cwiartki kartezjanskiego ukladu wspolrzednych.");
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/

/*
==========================ZADANIE 29====================
float a, b;

int main()
{
	printf("Sprawdzmy, do ktorej cwiartki karteznajckiego ukladu wspolczednych nalezy podany punkt. W tym celu: \n\n");
	printf("Podaj piewsza wspolrzedna punktu: ");
	while (scanf_s("%f", &a) != 1 || getchar() != '\n') {
		printf("Niepoprawna wspolrzedna punktu! Podaj ponownie: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	printf("\nPodaj druga wspolrzedna punktu: ");
	while (scanf_s("%f", &b) != 1 || getchar() != '\n') {
		printf("Niepoprawna wspolrzedna punktu! Podaj ponownie: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	printf("\nPodany punkt ma wspolrzedne (a, b)=(%.3f, %.3f)\n", a, b);
	if (a == 0 && b == 0) printf("Podany punkt lezy w poczatku kartezjanskiego ukladu wspolrzednych.");
	else if (a == 0) printf("Podany punkt nalezy do osi Y kartezjanskiego ukladu wspolrzednych.");
	else if (b == 0) printf("Podany punkt nalezy do osi X kartezjanskiego ukladu wspolrzednych.");
	else if (a > 0 && b > 0) printf("Podany punkt Nalezy do pierwszej cwiartki kartezjanskiego ukladu wspolrzednych.");
	else if (a < 0 && b > 0) printf("Podany punkt Nalezy do drugiej cwiartki kartezjanskiego ukladu wspolrzednych.");
	else if (a < 0 && b < 0) printf("Podany punkt Nalezy do trzeciej cwiartki kartezjanskiego ukladu wspolrzednych.");
	else printf("Podany punkt Nalezy do czwartej cwiartki kartezjanskiego ukladu wspolrzednych.");
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/

/*
==========================ZADANIE 30====================
float a, b;
int main()

{
	printf("W ponizszym programie sprawdzisz, czy liczba jest calkowita. A jezeli nie, to zaokragli ja w dol do najblizszej calkowitej.\n\n");
	printf("W tym celu podaj liczbe wymierna: ");
	while (scanf_s("%f", &a) != 1 || getchar() != '\n') {
		printf("Niepoprawna liczba! Podaj liczbe wymierna: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	b = a - (int)floor(a);
	if (b == 0) printf("Wprowadzona liczba jest calkowita!");
	else printf("Zaokraglenie w dol podanej liczby to: %d\n\n", (int)floor(a));
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/

/*
==========================ZADANIE 31====================
int main()
{
	double x, y;
	double fx;
	printf("Sprawdzmy, czy podany punkt nalezy do wykresu funkcji f(x). W tym celu: \n\n");
	printf("Podaj piewsza wspolrzedna punktu: ");
	while (scanf_s("%lf", &a) != 1 || getchar() != '\n') {
		printf("Niepoprawna wspolrzedna punktu! Podaj ponownie: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	printf("\nPodaj druga wspolrzedna punktu: ");
	while (scanf_s("%lf", &b) != 1 || getchar() != '\n') {
		printf("Niepoprawna wspolrzedna punktu! Podaj ponownie: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	printf("\nPodany punkt ma wspolrzedne (a, b)=(%.3lf, %.3lf)\n", a, b);
	if (a <= 0 || a >= 1) printf("Podany punkt nie nalezy do dziedziny funkcji f(x).\n");
	else {
		d = fabs(acos(a) + exp(a) / log(a));
		d = pow(d, (1.0 / 2.0));
		if (b == d) printf("Podany punkt nalezy do wykresu funkcji f(x).\n\n");
		else if (b > d) printf("Podany punkt lezy ponad wykresem funkcji f(x)\n\n");
		else printf("Podany punkt lezy ponizej wykresu funkcji f(x)\n\n");
	}
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/
/*Blad w obliczaniu wartosci d - wyskakuje NaN - jak rozwiazac?*/

/*
==========================ZADANIE 33====================
int x, y;

int main()
{
	printf("Program testowy operatorow zwiekszania i zmniejszania: \n\n");
	printf("Podaj liczbe calkowita: ");
	while (scanf_s("%d", &x) != 1 || getchar() != '\n') {
		printf("To przeciez nie jest liczba calkowita! Podaj ponownie: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	y = (x++) + 7;
	printf("(x++)+7=%d\n", y);	
	x = x--;
	y = (++x) + 7;
	printf("(++x)+7=%d\n", y);	
	x = --x;
	y = 7 + (x++);
	printf("7+(x++)=%d\n", y);	
	x = x--;
	y = (++x) + 7;
	printf("(++x)+7=%d\n", y);
	x = --x;
	y = (x+1) + 7;
	printf("(x+1)+7=%d\n", y);
	printf("\nJednakowe wyniki daja obliczenia 1 i 3 oraz 2, 4 i 5.\n");
	printf("\nMozna je zastapic w nastepujacy sposob:\n");
	y = x + 7;
	printf("x+7=%d\n", y);
	y = x + 1 + 7;
	printf("x+1+7=%d\n", y);
	y = 7 + x;
	printf("7+x=%d\n", y);
	y = x + 1 + 7;
	printf("x+1+7=%d\n", y);
	printf("Piaty przypadek niezmienny");
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/
