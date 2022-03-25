#include <stdio.h>
#include <math.h>

/*
 ==========================ZADANIE 34====================
int main()
{
	double x; /*liczba podawana przez usera
	double y; /*zmienna pomocnicza
	double fx; /*wartosc funkcji
	printf("Ponizszy program pozwala obliczyc wartosc funkcji f(x) zadanej liczby. x=");
	while (scanf_s("%lf", &x) != 1 || getchar() != '\n') {
		printf("Niepoprawny format! Podaj ponownie: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	y = pow(x, 2.0) + 1;
	fx = sqrt(y) + (log(y) / (5 + sin(y))) - exp(sin(y));
	printf("%lf", fx);
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/

/*
 ==========================ZADANIE 35====================
int main()
{
	float x; /*liczba podnoszona do potegi
	printf("Ponizszy program pozwala obliczyc wyrazenie x^8 dla zadanej liczby. x=");
	while (scanf_s("%f", &x) != 1 || getchar() != '\n') {
		printf("Niepoprawny format! Podaj ponownie: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	x = x * x;
	x = x * x;
	x = x * x;
	printf("x^8=%f", x);
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/

/*
 ==========================ZADANIE 36====================
int main()
{
	double x; /*liczba podana przez usera
	double fx; 
	printf("Ponizszy program pozwala obliczyc wartosc funkcji f(x) zadanej liczby. x=");
	while (scanf_s("%lf", &x) != 1 || getchar() != '\n') {
		printf("Niepoprawny format! Podaj ponownie: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	x = x - 2;
	fx = x * (13 + x * (17 + 23 * x));
	printf("f(x)=%lf", fx);
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/

/*
 ==========================ZADANIE 37====================
int main()
{
	double x, y; /*liczby podane przez usera
	double z; /*zmienna pomocnicza
	double fxy;
	printf("Ponizszy program pozwala obliczyc wartosc funkcji f(x,y) dla argumentow nalezacych do przedzialu (-1, 1).\nx=");
	while (scanf_s("%lf", &x) != 1 || x >= 1 || x <= -1 || getchar() != '\n') {
		printf("Niepoprawny format lub liczba nie nalezy do przedzialu (-1, 1)! Podaj ponownie: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	printf("y=");
	while (scanf_s("%lf", &y) != 1 || getchar() != '\n' || y >= 1 || y <= -1) {
		printf("Niepoprawny format lub liczba nie nalezy do przedzialu (-1, 1)! Podaj ponownie: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	z = x * x + y * y;
	fxy = y + sqrt(z) + z / cos(x * x);
	printf("f(x,y)=%lf", fxy);
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/


int main()
{
	int wybor;
	int i = 1;
	float x, y;
	printf("BASIC CALC\n\n");
	printf("1. DODAWANIE\n");
	printf("2. ODEJMOWANIE\n");
	printf("3. MNOZENIE\n");
	printf("4. DZIELENIE\n");
	printf("5. KONIEC\n");
	printf("\nPodaj pierwsza liczbe: ");
	while (scanf_s("%f", &x) != 1 || getchar() != '\n') {
		printf("Uwaga! Podaj poprawna liczbe: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}	
	printf("\nPodaj druga liczbe: ");
	while (scanf_s("%f", &y) != 1 || getchar() != '\n') {
		printf("Uwaga! Podaj poprawna liczbe: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	while (i != 0) {
		printf("\nAby wykonac dzialanie prosze wcisnac odpowiedni klawisz (1-5): ");
		while (scanf_s("%d", &wybor) != 1 || wybor > 5 || wybor < 1 || getchar() != '\n') {
			printf("Uwaga! Wcisnij klawisz (1-5): ");
			char znak = getchar();
			while (znak != '\n')
				znak = getchar();
		}
		printf("\n");
		switch (wybor) {
		case 1:
			printf("%f+%f=%f", x, y, x + y);
			i = 1;
			break;
		case 2:
			printf("%f-%f=%f", x, y, x - y);
			i = 1;
			break;
		case 3:
			printf("%f*%f=%f", x, y, x * y);
			i = 1;
			break;
		case 4:
			if (y == 0) {
				printf("Sieroto, nie dzieli sie przez zero!!!");
			}
			else {
				printf("%f/%f=%f", x, y, x / y);
				i = 1;
				break;
		case 5:
			i = 0;
			break;
			}
		}
	}
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}


/*
 ==========================ZADANIE 39====================
int main()
{
	float x; 
	double fx;
	printf("Ponizszy program oblicza wartosc funkcji f(x) dla danego argumentu. x=");
	while (scanf_s("%f", &x) != 1 || getchar() != '\n') {
		printf("Uwaga! Podaj poprawna liczbe: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	(x > 0) ? fx = pow(2.0, x) : fx = -1;
	printf("f(%f)=%lf", x, fx);
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/

/*
*  ==========================ZADANIE 40====================
int main()
{
	double x, y;
	double rklas;
	double rspec;
	double roznica;
	printf("Obliczmy dlugosc R wektora o koncach w poczatku ukladu wspolrzednych oraz punkcie O(x, y). W tym celu: \n\n");
	printf("Podaj piewsza wspolrzedna punktu: x=");
	while (scanf_s("%lf", &x) != 1 || getchar() != '\n') {
		printf("Niepoprawna wspolrzedna punktu! Podaj ponownie: x=");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	printf("Podaj druga wspolrzedna punktu: y=");
	while (scanf_s("%lf", &y) != 1 || getchar() != '\n') {
		printf("Niepoprawna wspolrzedna punktu! Podaj ponownie: y=");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	printf("\nPodany punkt ma wspolrzedne O(x, y)=(%.3lf, %.3lf)\n\n", x, y);
	rklas = sqrt(x * x + y * y);
	if (x == 0) rspec = fabs(y);
	else if (fabs(x) >= fabs(y) && x != 0) rspec = fabs(x) * sqrt(1 + (y / x) * (y / x));
	else rspec = fabs(y) * sqrt(1 + (x / y) * (x / y));
	printf("Obliczono dlugosc wektora dwiema metodami - klasyczna oraz specjalna.\n\n");
	if (rklas == rspec) printf("OBA ALGORYTMY DAJA TEN SAM WYNIK.\nOdleglosc punktu (%lf, %lf) od (0, 0) wynosi %.17g", x, y, rklas);
	else {
		printf("ALGORYTMY DAJA ROZNE WYNIKI.\nOdleglosc punktu (%lf, %lf) od (0, 0) wynosi:\n-wg klasycznego algorytmu %.17g,\n-wg specjalnego algorytmu %.17g.", x, y, rklas, rspec);
		roznica = fabs(rklas - rspec);
		printf("\n\nWartosc bezwzgledna roznicy miedzy wynikami:\n%.17g", roznica);
	}

	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/

/*
 ==========================ZADANIE 41====================
int main()
{
	float a, b;
	float c, d;
	float prost, rown;

	printf("Program sprawdza wzajemne polozenie wektorow u oraz v. W tym celu: \n\n");
	printf("Podaj piewsza wspolrzedna wektora u: a=");
	while (scanf_s("%f", &a) != 1 || getchar() != '\n') {
		printf("Niepoprawna wspolrzedna punktu! Podaj ponownie: x=");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	printf("Podaj druga wspolrzedna wektora u: b=");
	while (scanf_s("%f", &b) != 1 || getchar() != '\n') {
		printf("Niepoprawna wspolrzedna punktu! Podaj ponownie: x=");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	printf("\n");
	printf("Podaj piewsza wspolrzedna wektora v: c=");
	while (scanf_s("%f", &c) != 1 || getchar() != '\n') {
		printf("Niepoprawna wspolrzedna punktu! Podaj ponownie: x=");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	printf("Podaj druga wspolrzedna wektora v: d=");
	while (scanf_s("%f", &d) != 1 || getchar() != '\n') {
		printf("Niepoprawna wspolrzedna punktu! Podaj ponownie: x=");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	printf("\nPodano wektory:\nu=[%f, %f]\nv=[%f, %f]\n\n", a, b, c, d);
	prost = a * c + b * d;
	rown = a * d - b * c;
	if ((a == 0 && b == 0) || (c == 0 && d == 0)) printf("Jeden z wektorow jest wektorem zerowym!");
	else if (prost == 0) printf("Podane wektory sa do siebie prostopadle!");
	else if (rown == 0) printf("Podane wektory sa do siebie rownolegle!");
	else printf("Podane wektory sa randomowe!");
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/

/*
 ==========================ZADANIE 42====================
int main()
{
	int wybor, wybor2;
	float a, b, c, h, pole, p;
	double st, rad;
	printf("Ponizszy program pozwala obliczyc pole dowolnego trojkata roznymi metodami.\n\n");
	printf("1. PODSTAWA I WYSOKOSC\n");
	printf("2. DWA BOKI I KAT\n");
	printf("3. TRZY BOKI\n");
	printf("4. KONIEC\n");
	printf("\nW celu wyboru interesujacej Cie metody wybierz (1-3): ");
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
		}
		pole = a * h / 2;
		printf("\nPole trojkata o podstawie dlugosci %f oraz wysokosci %f ma pole rowne %f", a, h, pole);
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
			while (scanf_s("%lf", &st) != 1 || st <=0 || st >= 180 || getchar() != '\n') {
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
		break;
	case 4:
		break;
	}
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/

/*
 ==========================ZADANIE 43====================
int main()
{
	float a, b, c;
	printf("Program sprawdza ktora z trzech podanych liczb jest najmniejsza W tym celu: \n\n");
	printf("Podaj piewsza liczbe: a=");
	while (scanf_s("%f", &a) != 1 || getchar() != '\n') {
		printf("Niepoprawna wartosc! Podaj ponownie: a=");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	printf("Podaj druga liczbe: b=");
	while (scanf_s("%f", &b) != 1 || getchar() != '\n') {
		printf("Niepoprawna wartosc! Podaj ponownie: b=");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	printf("Podaj trzecia liczbe: c=");
	while (scanf_s("%f", &c) != 1 || getchar() != '\n') {
		printf("Niepoprawna wartosc! Podaj ponownie: c=");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	printf("Podane liczby to: %f, %f oraz %f.\n", a, b, c);
	if (a < b && a < c) printf("Najmniejsza z podanych liczb to %f", a);
	else if (b < a && b < c) printf("Najmniejsza z podanych liczb to %f", b);
	else printf("Najmniejsza z podanych liczb to %f", c);
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/
