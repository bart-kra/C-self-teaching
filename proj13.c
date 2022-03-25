#include <stdio.h>
#include <float.h>
#include <stdlib.h>
#include <math.h>

#define MAX_M 25
#define MAX_N 25
#define LOS_MIN 0
#define LOS_MAX 100

void info(void) {
	printf("Welcome! Oto nasz dzisiejszy program!");
}

int podaj_int(int max) {
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || liczba > max || liczba <= 0 || getchar() != '\n') {
		printf("Podaj liczbe naturalna z zakresu (1-%d): ", max);
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

void change_rows(double tab[][MAX_N], int m, int n, int z1, int z2) {
	int memory = 0;
	for (int i = 0; i < n; ++i) {
		memory = tab[z1-1][i];
		tab[z1-1][i] = tab[z2-1][i];
		tab[z2-1][i] = memory;
	}
}

int find_max_diag(double tab[][MAX_M], int m) {
	int max = 0;
	int m_max = 0;
	for (int i = 0; i < m; ++i) {
		if (tab[i][i] > max) {
			max = tab[i][i];
			m_max = i;
		}
	}
	return m_max;
}

void change_rows_col(double tab[][MAX_N], int m, int max) {
	int memory = 0;
	for (int i = 0; i < m; ++i) {
		memory = tab[i][max];
		tab[i][max] = tab[max][i];
		tab[max][i] = memory;
	}
}

void matrixes_sum(double tab1[][MAX_N], double tab2[][MAX_N], double tab3[][MAX_N], int m, int n) {
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			tab3[i][j] = tab1[i][j] + tab2[i][j];
		}
	}
}

void matrixes_product(double tab1[][MAX_N], double tab2[][MAX_N], double tab3[][MAX_N], int m, int n) {
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			tab3[i][j] = tab1[i][j] * tab2[i][j];
		}
	}
}

float matrix_sq_sum(double tab[][MAX_N], int m, int n) {
	float sum = 0;
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			sum = sum + pow(tab[i][j], 2.0);
		}
	}
	return sum;
}

int find_max_row(double tab[][MAX_M], int m, int n) {
	int suma;
	int max = 0;
	for (int i = 0; i < m; ++i) {
		suma = 0;
		for (int j = 0; j < n; ++j) {
			suma = suma + tab[i][j];
		}
		if (suma > max) max = suma;
	}
	return max;
}

void end() {
	printf("\nDeveloped by: Bartosz Krassowski. Dziekuje za skorzystanie!");
}

/*
================ZADANIE 95=================
int main() {
	srand((unsigned)time(NULL));
	int m;
	int n;
	int zamiana1, zamiana2;
	double tab[MAX_M][MAX_N];
	info();
	printf("\nPodaj liczbe wierszy: ");
	m = podaj_int(MAX_M);
	printf("Podaj liczbe kolumn: ");
	n = podaj_int(MAX_N);
	printf("\n\nKtore wiersze chcesz ze soba zamienic?");
	printf("\n1. wiersz: ");
	zamiana1 = podaj_int(m);
	printf("2. wiersz: ");
	zamiana2 = podaj_int(m);
	read_double_2D(tab, m, n);
	print_2D(tab, m, n);
	change_rows(tab, m, n, zamiana1, zamiana2);
	print_2D(tab, m, n);
	end();
	return 0;
}
*/

/*
=============ZADANIE 96=============
int main() {
	srand((unsigned)time(NULL));
	int m, max_diag;
	double tab[MAX_M][MAX_N];
	info();
	printf("\nPodaj liczbe wierszy oraz kolumn: ");
	m = podaj_int(MAX_M);
	read_double_2D(tab, m, m);
	print_2D(tab, m, m);
	max_diag = find_max_diag(tab, m);
	change_rows_col(tab, m, max_diag);
	print_2D(tab, m, m);
	end();
	return 0;
}
*/

/*
=============ZADANIE 97=============
int main() {
	srand((unsigned)time(NULL));
	int m;
	int n;
	double tab1[MAX_M][MAX_N];
	double tab2[MAX_M][MAX_N];
	double tab3[MAX_M][MAX_N];
	info();
	printf("\nPodaj liczbe wierszy: ");
	m = podaj_int(MAX_M);
	printf("Podaj liczbe kolumn: ");
	n = podaj_int(MAX_N);
	read_double_2D(tab1, m, n);
	read_double_2D(tab2, m, n);
	printf("\nTabela A:");
	print_2D(tab1, m, n);
	printf("\nTabela B:");
	print_2D(tab2, m, n);
	printf("\nSuma tabeli A oraz B:");
	matrixes_sum(tab1, tab2, tab3, m, n);
	print_2D(tab3, m, n);
	end();
	return 0;
}
*/

/*
=============ZADANIE 98=============
int main() {
	srand((unsigned)time(NULL));
	int m;
	int n;
	double tab1[MAX_M][MAX_N];
	double tab2[MAX_M][MAX_N];
	double tab3[MAX_M][MAX_N];
	info();
	printf("\nPodaj liczbe wierszy: ");
	m = podaj_int(MAX_M);
	printf("Podaj liczbe kolumn: ");
	n = podaj_int(MAX_N);
	read_double_2D(tab1, m, n);
	read_double_2D(tab2, m, n);
	printf("\nTabela A:");
	print_2D(tab1, m, n);
	printf("\nTabela B:");
	print_2D(tab2, m, n);
	printf("\Iloczyn tabeli A oraz B:");
	matrixes_product(tab1, tab2, tab3, m, n);
	print_2D(tab3, m, n);
	end();
	return 0;
}
*/

/*
=============ZADANIE 99=============
int main() {
	srand((unsigned)time(NULL));
	int m;
	int n;
	int max;
	int zamiana1, zamiana2;
	double tab[MAX_M][MAX_N];
	info();
	printf("\nPodaj liczbe wierszy: ");
	m = podaj_int(MAX_M);
	printf("Podaj liczbe kolumn: ");
	n = podaj_int(MAX_N);
	read_double_2D(tab, m, n);
	print_2D(tab, m, n);
	max = find_max_row(tab, m, n);
	printf("Maksymalna suma wiersza to: %d", max);
	end();
	return 0;
}
*/

/*
=============ZADANIE 100=============
int main() {
	srand((unsigned)time(NULL));
	int m;
	int n;
	int max;
	float sum;
	float sqrt_sum;
	int zamiana1, zamiana2;
	double tab[MAX_M][MAX_N];
	info();
	printf("\nPodaj liczbe wierszy: ");
	m = podaj_int(MAX_M);
	printf("Podaj liczbe kolumn: ");
	n = podaj_int(MAX_N);
	read_double_2D(tab, m, n);
	print_2D(tab, m, n);
	sum = matrix_sq_sum(tab, m, n);
	sqrt_sum = pow(sum, 0.5);
	printf("Pierwiastek z sumy kwadratow wyrazow to: %lf", sqrt_sum);
	end();
	return 0;
}
*/
