#include <stdio.h>
#include <float.h>
#include <stdlib.h>

/*
=============================ZADANIE 87==================
#define MAX_M 25
#define MAX_N 25

void info(void) {
	printf("Welcome! Oto nasz dzisiejszy program!");
}

int podaj_int(int max) {
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || liczba > max || liczba < 0 || getchar() != '\n') {
		printf("Podaj liczbe naturalna z zakresu (0-%d): ", max);
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return liczba;
}

double podaj_double(double min, double max) {
	double liczba;
	while (scanf_s("%lf", &liczba) != 1 || liczba > max || liczba < min || getchar() != '\n') {
		printf("Podaj liczbe naturalna z zakresu (0-%lf): ", max);
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return liczba;
}

void read_double_2D(double tab[][MAX_N], int m, int n) {
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			printf("a%d%d = ", i+1, j+1);
			tab[i][j] = podaj_double (DBL_MIN, DBL_MAX);
			printf(" %lf\n",  tab[i][j]);
		}
	}
}

void end() {
	printf("Developed by: Bartosz Krassowski. Dziekuje za skorzystanie!");
}

int main() {
	int m;
	int n;
	double tab[MAX_M][MAX_N];
	info();
	printf("\nPodaj liczbe wierszy: ");
	m = podaj_int(MAX_M);
	printf("Podaj liczbe kolumn: ");
	n = podaj_int(MAX_N);
	read_double_2D(tab, m, n);
	end();
	return 0;
}
*/

/*
=============================ZADANIE 88==================
#define MAX_M 25
#define MAX_N 25

void info(void) {
	printf("Welcome! Oto nasz dzisiejszy program!");
}

int podaj_int(int max) {
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || liczba > max || liczba < 0 || getchar() != '\n') {
		printf("Podaj liczbe naturalna z zakresu (0-%d): ", max);
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return liczba;
}

double podaj_double(double min, double max) {
	double liczba;
	while (scanf_s("%lf", &liczba) != 1 || liczba > max || liczba < min || getchar() != '\n') {
		printf("Podaj liczbe naturalna z zakresu (0-%lf): ", max);
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return liczba;
}

void read_double_2D(double tab[][MAX_N], int m, int n) {
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			printf("a%d%d = ", i + 1, j + 1);
			tab[i][j] = podaj_double(DBL_MIN, DBL_MAX);
		}
	}
}

void print_2D(double tab[][MAX_N], int m, int n) {
	printf("\n");
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			printf("%5lg", tab[i][j]);
		}
		printf("\n");
	}
}

void print_2D_trans(double tab[][MAX_N], int m, int n) {
	printf("\n");
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			printf("%5lg", tab[j][i]);
		}
		printf("\n");
	}
}

void end() {
	printf("\nDeveloped by: Bartosz Krassowski. Dziekuje za skorzystanie!");
}

int main() {
	int m;
	int n;
	double tab[MAX_M][MAX_N];
	info();
	printf("\nPodaj liczbe wierszy: ");
	m = podaj_int(MAX_M);
	printf("Podaj liczbe kolumn: ");
	n = podaj_int(MAX_N);
	read_double_2D(tab, m, n);
	print_2D(tab, m, n);
	print_2D_trans(tab, n, m);
	end();
	return 0;
}
*/

/*
================ZADANIE 88b==================
#define MAX_M 25
#define MAX_N 25
#define LOS_MIN 0
#define LOS_MAX 100

void info(void) {
	printf("Welcome! Oto nasz dzisiejszy program!");
}

int podaj_int(int max) {
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || liczba > max || liczba < 0 || getchar() != '\n') {
		printf("Podaj liczbe naturalna z zakresu (0-%d): ", max);
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return liczba;
}

double losuj_int(min, max) {
	int losowa;
	int przedzial;
	przedzial = max - min + 1;
	losowa = rand() % przedzial + min;
	return losowa;
}

void read_double_2D(double tab[][MAX_N], int m, int n) {
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			tab[i][j] = losuj_int(LOS_MIN, LOS_MAX);
		}
	}
}

void print_2D(double tab[][MAX_N], int m, int n) {
	printf("\n");
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			printf("%5lg", tab[i][j]);
		}
		printf("\n");
	}
}

void print_2D_trans(double tab[][MAX_N], int m, int n) {
	printf("\n");
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			printf("%5lg", tab[j][i]);
		}
		printf("\n");
	}
}

void end() {
	printf("\nDeveloped by: Bartosz Krassowski. Dziekuje za skorzystanie!");
}

int main() {
	srand((unsigned)time(NULL));
	int m;
	int n;
	double tab[MAX_M][MAX_N];
	info();
	printf("\nPodaj liczbe wierszy: ");
	m = podaj_int(MAX_M);
	printf("Podaj liczbe kolumn: ");
	n = podaj_int(MAX_N);
	read_double_2D(tab, m, n);
	print_2D(tab, m, n);
	print_2D_trans(tab, n, m);
	end();
	return 0;
}
*/

/*
=====================ZADANIE 92=====================
#define MAX_M 25
#define MAX_N 25
#define LOS_MIN 0
#define LOS_MAX 100

void info(void) {
	printf("Welcome! Oto nasz dzisiejszy program!");
}

int podaj_int(int max) {
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || liczba > max || liczba < 0 || getchar() != '\n') {
		printf("Podaj liczbe naturalna z zakresu (0-%d): ", max);
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return liczba;
}

double losuj_int(min, max) {
	int losowa;
	int przedzial;
	przedzial = max - min + 1;
	losowa = rand() % przedzial + min;
	return losowa;
}

double read_double_2D(double tab[][MAX_N], int m, int n) {
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			tab[i][j] = losuj_int(LOS_MIN, LOS_MAX);
		}
	}
}

double suma_przekatna(double tab[][MAX_N], int m, int n) {
	double suma = 0;
	int k = (m < n) ? m : n;
	for (int i = 0; i < k; ++i) {
		suma = suma + tab[i][i];
	}
	return suma;
}

void print_2D(double tab[][MAX_N], int m, int n) {
	printf("\n");
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			printf("%5lg", tab[i][j]);
		}
		printf("\n");
	}
}

void print_2D_trans(double tab[][MAX_N], int m, int n) {
	printf("\n");
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			printf("%5lg", tab[j][i]);
		}
		printf("\n");
	}
}

void end() {
	printf("\nDeveloped by: Bartosz Krassowski. Dziekuje za skorzystanie!");
}

int main() {
	srand((unsigned)time(NULL));
	int m;
	int n;
	double suma;
	double tab[MAX_M][MAX_N];
	info();
	printf("\nPodaj liczbe wierszy: ");
	m = podaj_int(MAX_M);
	printf("Podaj liczbe kolumn: ");
	n = podaj_int(MAX_N);
	read_double_2D(tab, m, n);
	suma = suma_przekatna(tab, m, n);
	print_2D(tab, m, n);
	printf("\nSuma na przekatnej to: %lf", suma);
	printf("\nTranspozycja macierzy:");
	print_2D_trans(tab, n, m);
	
	end();
	return 0;
}
*/


/*
=====================ZADANIE 93=====================
#define MAX_M 25
#define MAX_N 25
#define LOS_MIN 0
#define LOS_MAX 100

void info(void) {
	printf("Welcome! Oto nasz dzisiejszy program!");
}

int podaj_int(int max) {
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || liczba > max || liczba < 0 || getchar() != '\n') {
		printf("Podaj liczbe naturalna z zakresu (0-%d): ", max);
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return liczba;
}

double losuj_int(min, max) {
	int losowa;
	int przedzial;
	przedzial = max - min + 1;
	losowa = rand() % przedzial + min;
	return losowa;
}

double read_double_2D(double tab[][MAX_N], int m, int n) {
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			tab[i][j] = losuj_int(LOS_MIN, LOS_MAX);
		}
	}
}

double suma_przekatna(double tab[][MAX_N], int m, int n) {
	double suma = 0;
	int k = (m < n) ? m : n;
	for (int i = 0; i < k; ++i) {
		suma = suma + tab[i][i];
	}
	return suma;
}

double suma_nad2D(double tab[][MAX_N], int m, int n) {
	double suma_nad = 0;
	if (n <= m) {
		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				suma_nad = suma_nad + tab[i][j];
			}
		}
	}
	else {
		for (int i = 0; i < m; ++i) {
			for (int j = i + 1; j < n; ++j) {
				suma_nad = suma_nad + tab[i][j];
			}
		}
	}
	return suma_nad;
}

double suma_pod2D(double tab[][MAX_N], int m, int n) {
	double suma_pod = 0;
	if (n >= m) {
		for (int i = 1; i < m; ++i) {
			for (int j = 0; j < i; ++j) {
				suma_pod = suma_pod + tab[i][j];
				printf("%lf\t", tab[i][j]);
			}
		}
	}
	else {
		for (int i = 1; i < m; ++i) {
			for (int j = 0; j < i && j <n; ++j) {
				suma_pod = suma_pod + tab[i][j];
				printf("%lf\t", tab[i][j]);
			}
		}
	}
	return suma_pod;
}

void print_2D(double tab[][MAX_N], int m, int n) {
	printf("\n");
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			printf("%5lg", tab[i][j]);
		}
		printf("\n");
	}
}

void print_2D_trans(double tab[][MAX_N], int m, int n) {
	printf("\n");
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			printf("%5lg", tab[j][i]);
		}
		printf("\n");
	}
}

void end() {
	printf("\nDeveloped by: Bartosz Krassowski. Dziekuje za skorzystanie!");
}

int main() {
	srand((unsigned)time(NULL));
	int m;
	int n;
	double suma, suma_nad, suma_pod;
	double tab[MAX_M][MAX_N];
	info();
	printf("\nPodaj liczbe wierszy: ");
	m = podaj_int(MAX_M);
	printf("Podaj liczbe kolumn: ");
	n = podaj_int(MAX_N);
	read_double_2D(tab, m, n);
	suma = suma_przekatna(tab, m, n);
	suma_nad = suma_nad2D(tab, m, n);
	suma_pod = suma_pod2D(tab, m, n);
	print_2D(tab, m, n);
	printf("\nSuma na przekatnej to: %lf", suma);
	printf("\nSuma nad przekatna to: %lf", suma_nad);
	printf("\nSuma pod przekatna to: %lf", suma_pod);
	printf("\n\nTranspozycja macierzy:\n");
	print_2D_trans(tab, n, m);

	end();
	return 0;
}
*/


/*
=====================ZADANIE 89+91=====================
#define MAX_M 25
#define MAX_N 25
#define LOS_MIN 0
#define LOS_MAX 100

void info(void) {
	printf("Welcome! Oto nasz dzisiejszy program!");
}

int podaj_int(int max) {
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || liczba > max || liczba < 0 || getchar() != '\n') {
		printf("Podaj liczbe naturalna z zakresu (0-%d): ", max);
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return liczba;
}

double losuj_int(min, max) {
	int losowa;
	int przedzial;
	przedzial = max - min + 1;
	losowa = rand() % przedzial + min;
	return losowa;
}

double read_double_2D(double tab[][MAX_N], int m, int n) {
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			tab[i][j] = losuj_int(LOS_MIN, LOS_MAX);
		}
	}
}

double max_2D(double tab[][MAX_N], int m, int n) {
	double max = tab[0][0];
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			if (tab[i][j] > max) max = tab[i][j];
		}
	}
	return max;
}

double min_2D(double tab[][MAX_N], int m, int n) {
	double min = tab[0][0];
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			if (tab[i][j] < min) min = tab[i][j];
		}
	}
	return min;
}

double suma_przekatna_2D(double tab[][MAX_N], int m, int n) {
	double suma = 0;
	int k = (m < n) ? m : n;
	for (int i = 0; i < k; ++i) {
		suma = suma + tab[i][i];
	}
	return suma;
}

double suma_nad_2D(double tab[][MAX_N], int m, int n) {
	double suma_nad = 0;
	if (n <= m) {
		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				suma_nad = suma_nad + tab[i][j];
			}
		}
	}
	else {
		for (int i = 0; i < m; ++i) {
			for (int j = i + 1; j < n; ++j) {
				suma_nad = suma_nad + tab[i][j];
			}
		}
	}
	return suma_nad;
}

double suma_pod_2D(double tab[][MAX_N], int m, int n) {
	double suma_pod = 0;
	if (n >= m) {
		for (int i = 1; i < m; ++i) {
			for (int j = 0; j < i; ++j) {
				suma_pod = suma_pod + tab[i][j];
			}
		}
	}
	else {
		for (int i = 1; i < m; ++i) {
			for (int j = 0; j < i && j < n; ++j) {
				suma_pod = suma_pod + tab[i][j];
			}
		}
	}
	return suma_pod;
}

double suma_2D(double tab[][MAX_N], int m, int n) {
	double suma = 0;
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			suma = suma + tab[i][j];
		}
	}
	return suma;
}

void print_2D(double tab[][MAX_N], int m, int n) {
	printf("\n");
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			printf("%5lg", tab[i][j]);
		}
		printf("\n");
	}
}

void print_2D_trans(double tab[][MAX_N], int m, int n) {
	printf("\n");
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			printf("%5lg", tab[j][i]);
		}
		printf("\n");
	}
}

void end() {
	printf("\nDeveloped by: Bartosz Krassowski. Dziekuje za skorzystanie!");
}

int main() {
	srand((unsigned)time(NULL));
	int m;
	int n;
	double suma_przekatna, suma_nad, suma_pod, suma, max, min;
	double tab[MAX_M][MAX_N];
	info();
	printf("\nPodaj liczbe wierszy: ");
	m = podaj_int(MAX_M);
	printf("Podaj liczbe kolumn: ");
	n = podaj_int(MAX_N);
	read_double_2D(tab, m, n);
	max = max_2D(tab, m, n);
	min = min_2D(tab, m, n);
	suma_przekatna = suma_przekatna_2D(tab, m, n);
	suma_nad = suma_nad_2D(tab, m, n);
	suma_pod = suma_pod_2D(tab, m, n);
	suma = suma_2D(tab, m, n);
	print_2D(tab, m, n);
	printf("\nWartosc najwieksza w tablicy to: %lg", max);
	printf("\nWartosc najmniejsza w tablicy to: %lg", min);
	printf("\nSuma na przekatnej to: %lg", suma_przekatna);
	printf("\nSuma nad przekatna to: %lg", suma_nad);
	printf("\nSuma pod przekatna to: %lg", suma_pod);
	printf("\nSuma wszystkich wyrazow macierzy to: %lg", suma);
	printf("\n\nTranspozycja macierzy:\n");
	print_2D_trans(tab, n, m);

	end();
	return 0;
}
*/

/*
#define MAX_M 25
#define MAX_N 25
#define LOS_MIN 0
#define LOS_MAX 1

void info(void) {
	printf("Welcome! Oto nasz dzisiejszy program!");
}

int podaj_int(int max) {
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || liczba > max || liczba < 0 || getchar() != '\n') {
		printf("Podaj liczbe naturalna z zakresu (0-%d): ", max);
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return liczba;
}

double losuj_int(min, max) {
	int losowa;
	int przedzial;
	przedzial = max - min + 1;
	losowa = rand() % przedzial + min;
	return losowa;
}

double read_double_2D(double tab[][MAX_N], int m, int n) {
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			tab[i][j] = losuj_int(LOS_MIN, LOS_MAX);
		}
	}
}

void ifjeden(double tab[][MAX_N], int m, int n) {
	for (int i = 0; i < m; ++i) {
		double suma = 0;
		for (int j = 0; j < n && suma <= 2; ++j) {
			suma = suma + tab[i][j];
		}
		if (suma == 1) {
			printf("\nW %d. wierszu jest dokladnie jedna jedynka", i + 1);
		}
		else {
			printf("\nW %d. wierszu nie ma dokladnie jednej jedynki", i + 1);
		}
	}
}

void print_2D(double tab[][MAX_N], int m, int n) {
	printf("\n");
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {

			printf("%5lg", tab[i][j]);
		}
		printf("\n");
	}
}

void end() {
	printf("\n\nDeveloped by: Bartosz Krassowski. Dziekuje za skorzystanie!");
}

int main() {
	srand((unsigned)time(NULL));
	int m;
	int n;
	double tab[MAX_M][MAX_N];
	info();
	printf("\nPodaj liczbe wierszy: ");
	m = podaj_int(MAX_M);
	printf("Podaj liczbe kolumn: ");
	n = podaj_int(MAX_N);
	read_double_2D(tab, m, n);
	print_2D(tab, m, n);
	ifjeden(tab, m, n);
	end();
	return 0;
}
*/