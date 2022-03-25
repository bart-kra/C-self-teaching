#include <stdio.h>

/*
========================ZADANIE 75=========================
#define ILE 10

void info(void) {
	printf("Czolem! Ponizszy program ulozy podane przez Ciebie 10 liczb w odwrotnej kolejnosci.\n");
	printf("Podaj liczby: \n\n");
}

int podaj_calkowita(void) {
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || getchar() != '\n') {
		printf("Podaj liczbe naturalna: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return liczba;
}

void end(void) {
	printf("\n\nDziekuje za skorzystanie z programu! Przygotowanie: Bartosz Krassowski\n");
}

int main() {
	info();
	int liczba;
	int tablica[ILE];
	int i;
	for (i = 0; i < ILE; i++) {
		printf("%d. liczba: ", i + 1);
		tablica[i] = podaj_calkowita();
	}
	printf("\nKolejno podano: \n");
	for (i = 0; i < ILE; i++) {
		printf("%d \t", tablica[i]);
	}
	printf("\nW odwroconej kolejnosci bedzie to:\n");
	for (i = ILE-1; i >= 0; i--) {
		printf("%d \t", tablica[i]);
	}
	end();
	return 0;
}
*/

/*
#define ILE 10

void wczytaj_int_1W(int* tab, int n) {
	tab[4] = 3;
}

int main() {
	int liczby[ILE] = { 0 };
	printf("Przed:\n\n");
	for (int i = 0; i < ILE; ++i) {
		printf("%d ", liczby[i]);
	}
	wczytaj_int_1W(liczby, ILE);
	printf("\n\nPo:\n\n");
	for (int i = 0; i < ILE; ++i) {
		printf("%d ", liczby[i]);
	}
	printf("\n\n");
	return 0;
}
*/

/*
#define ILE 10

void info(void) {
	printf("Czolem! Ponizszy program ulozy podane przez Ciebie 10 liczb w odwrotnej kolejnosci.\n");
	printf("Podaj liczby: \n\n");
}

int podaj_calkowita(void) {
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || getchar() != '\n') {
		printf("Podaj liczbe naturalna: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return liczba;
}

void wczytaj_int_1W(int tab[], int n) {
	for (int i = 0; i < n; ++i) {
		printf("%d. liczba: ", i + 1);
		tab[i] = podaj_calkowita();
	}
}

void wypisz_kolejno(int tab[], int n) {
	printf("\nKolejno podano: \n");
	for (int i = 0; i < n; i++) {
		printf("%d \t", tab[i]);
	}
}

void wypisz_wspak(int tab[], int n) {
	printf("\nW odwroconej kolejnosci bedzie to:\n");
	for (int i = ILE - 1; i >= 0; i--) {
		printf("%d \t", tab[i]);
	}
}

void end(void) {
	printf("\n\nDziekuje za skorzystanie z programu! Przygotowanie: Bartosz Krassowski\n");
}

int main() {
	info();
	int tablica[ILE];
	wczytaj_int_1W(tablica, ILE);
	wypisz_kolejno(tablica, ILE);
	wypisz_wspak(tablica, ILE);	
	end();
	return 0;
}
*/

void info(void) {
	printf("Czolem! Ponizszy program poprosi o podanie n wyrazow ciagu a nastepnie obliczy ich sume oraz iloczyn.\n");
	printf("Podaj ile liczb chcesz wpisac: \n\n");
}

int podaj_calkowita_do100(void) {
	int ilewyrazow;
	while (scanf_s("%d", &ilewyrazow) != 1 || ilewyrazow > 100 || getchar() != '\n') {
		printf("Podaj liczbe naturalna mniejsza od 100: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return ilewyrazow;
}

int podaj_calkowita(void) {
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || getchar() != '\n') {
		printf("Podaj liczbe naturalna: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return liczba;
}

void wczytaj_int_1W(int tab[], int n) {
	printf("\n\nPodaj liczby: ");
	for (int i = 0; i < n; ++i) {
		printf("%d. liczba: ", i + 1);
		tab[i] = podaj_calkowita();
	}
}




void end(void) {
	printf("\n\nDziekuje za skorzystanie z programu! Przygotowanie: Bartosz Krassowski\n");
}

int main() {
	info();
	int ilewyrazow;
	podaj_calkowita_do100();
	int tablica[100];
	wczytaj_int_1W(tablica, ilewyrazow);
	
	end();
	return 0;
}