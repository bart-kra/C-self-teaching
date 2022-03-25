#include <stdio.h>

/*
========================ZADANIE 82=========================
#define ILE 100

void info() {
	printf("Czolem! Ponizszy program sprawdzi czy posrod n wprowadzonych liczb jest para takich samych.\nPodaj ile liczb chcesz podac (1-100): ");
}

int podaj_zakres(int max) {
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || liczba > max || getchar() != '\n') {
		printf("Podaj liczbe naturalna z zakresu (0-%d): ", max);
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return liczba;
}

int podaj_wyraz() {
	int wyraz;
	while (scanf_s("%d", &wyraz) != 1 || wyraz < 0 || getchar() != '\n') {
		printf("Podaj liczbe calkowita: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return wyraz;
}

void wczytaj_int_1W(int tab[], int n) {
	for (int i = 0; i < n; ++i) {
		printf("%d. liczba: ", i + 1);
		tab[i] = podaj_wyraz();
	}
}

void porownaj(int tab[], int n) {
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (tab[i] == tab[j]) {
				printf("Wsrod podanych liczb sa dwie jednakowe!");
				break;
			}
		}
	}
}

int main() {
	info();
	int liczba;
	liczba = podaj_zakres(ILE);
	int tablica[ILE];
	wczytaj_int_1W(tablica, liczba);
	porownaj(tablica, liczba);
	return 0;
}
*/

/*
========================ZADANIE 83=========================
#define ILE 100

void info() {
	printf("Czolem! Ponizszy program oblicza pewien wielomian w(x) = a0+a1x+a2x^2+...+anx^n.\nPodaj ile skladnikow chcesz podac (1-100): ");
}

int podaj_zakres(int max) {
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || liczba > max || getchar() != '\n') {
		printf("Podaj liczbe naturalna z zakresu (0-%d): ", max);
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return liczba;
}

int podaj_wyraz(void) {
	int wyraz;
	while (scanf_s("%d", &wyraz) != 1 || wyraz < 0 || getchar() != '\n') {
		printf("Podaj liczbe calkowita: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return wyraz;
}

void wczytaj_int_1W(int tab[], int n) {
	printf("\n\nPodaj wartosci wspolczynnikow: \n");
	for (int i = 0; i < n; ++i) {
		printf("a%d = ", i + 1);
		tab[i] = podaj_wyraz();
	}
}

int podaj_x() {
	int x;
	printf("\nPodaj wartosc x: ");
	while (scanf_s("%d", &x) != 1 || x < 0 || getchar() != '\n') {
		printf("Podaj liczbe calkowita: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return x;
}

int liczf(int tab[], int x, int liczba) {
	int wynik = 0;
	int powx = 1;
	for (int i = 0; i < liczba; ++i) {
		wynik = wynik + tab[i] * powx;
		powx = powx * x;
	}
	return wynik;
}

void end(int x, int wynik) {
	printf("\n\nWartosc wielomianu w punkcie %d jest rowna %d", x, wynik);
	printf("\nDziekuje za skorzystanie z programu!Developed by Bartosz Krassowski\n");
}

int main() {
	
	int liczba;
	int tablica[ILE];
	int wyraz;
	int wynik;
	int x;

	info();
	liczba = podaj_zakres(ILE);
	wczytaj_int_1W(tablica, liczba);
	x = podaj_x();
	wynik = liczf(tablica, x, liczba);
	end(x, wynik);
	return 0;
}
*/

/*
========================ZADANIE 84=========================
#define ILE 35

void info() {
	printf("Czolem! Ponizszy program rysuje trojkat Pascala o n wierszach.\nPodaj liczbe wierszy (1-35): ");
}

int podaj_zakres(int max) {
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || liczba > max || getchar() != '\n') {
		printf("Podaj liczbe naturalna z zakresu (0-%d): ", max);
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return liczba;
}

void dwumian(int n, int k) {
	int wynik = 1;
	for (int i = 1; i <= n - k; ++i) {
		wynik = wynik * (k + i) / i;
	}
	printf("%5d ", wynik);
}

void rysuj_linie(int n) {
	for (int i = 0; i <= n; ++i) {
		dwumian(n, i);
	}
	printf("\n");
}

void rysuj_trojkat(int n) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n - i; ++j) {
			printf("   ");
		}
		rysuj_linie(i);
	}
}



void end(void) {
	printf("\nDziekuje za skorzystanie z programu! Developed by Bartosz Krassowski\n");
}

int main() {

	int zakres;
	int wynik;
	int n;
	int k;
	info();
	zakres = podaj_zakres(ILE);
	rysuj_trojkat(zakres);
	end();
	return 0;
}
*/

/*
=====DO DALSZEJ WALKI=======
#define ILE 35

void rysuj_linie(int n) {
	for (int i = 0; i <= n; ++i) {
		dwumian(n, i);
	}
	printf("\n");
}

void rysuj_trojkat(int n) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n - i; ++j) {
			printf("   ");
		}
		rysuj_linie(i);
	}
}


#define ILE 35

void info() {
	printf("Czolem! Ponizszy program rysuje trojkat Pascala o n wierszach.\nPodaj liczbe wierszy (1-35): ");
}

int podaj_zakres(int max) {
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || liczba > max || getchar() != '\n') {
		printf("Podaj liczbe naturalna z zakresu (0-%d): ", max);
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return liczba;
}

void rysuj_trojkat(int tab[], int n) {
	for (int i = n - 1; i = 0; --i) {

	}
}

void end(void) {
	printf("\nDziekuje za skorzystanie z programu! Developed by Bartosz Krassowski\n");
}

int main() {

	int zakres;
	int tablica[ILE];
	info();
	zakres = podaj_zakres(ILE);
	rysuj_trojkat(zakres);
	end();
	return 0;
}
*/