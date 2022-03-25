#include <stdio.h>

/*
========================ZADANIE 67=========================
void info(void) {
	printf("Czolem! Ponizszy program wypisze tyle gwiazdek w jednym wierszu, ile sobie zazyczysz.\n");
	printf("Podaj zatem liczbe gwiazdek: ");
}

int podaj_naturalna(void) {
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || getchar() != '\n') {
		printf("Podaj liczbe naturalna: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return liczba;
}

void rysuj_linie(int m) {
	for (int i = 1; i <= m; i++) {
		putchar('*');
	}
}

int main() {
	info();
	int liczba;
	liczba = podaj_naturalna();
	printf("\nOto Twoje gwiazdki: \n");
	rysuj_linie(liczba);
	printf("\n\nDziekuje za skorzystanie z programu! Przygotowanie: Bartosz Krassowski\n");
	return 0;
}
*/

/*
========================ZADANIE 68=========================
void info(void) {
	printf("Czolem! Ponizszy program narysuje kwadrat z gwiazdek o dlugosci boki, jaki sobie zazyczysz.\n");
	printf("Podaj zatem dlugosc boku : ");
}

int podaj_naturalna(void) {
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || getchar() != '\n') {
		printf("Podaj liczbe naturalna: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return liczba;
}

void rysuj_linie(int m) {
	for (int i = 1; i <= m; i++) {
		putchar('*');
	}
}

void rysuj_kwadrat(int m) {
	for (int j = 1; j <= m; j++) {
		rysuj_linie(m);
		putchar('\n');
	}
}

int main() {
	info();
	int liczba;
	liczba = podaj_naturalna();
	printf("\nOto Twoj kwadrat: \n");
	rysuj_kwadrat(liczba);
	printf("\n\nDziekuje za skorzystanie z programu! Przygotowanie: Bartosz Krassowski\n");
	return 0;
}
*/

/*
========================ZADANIE 69=========================
void info(void) {
	printf("Czolem! Ponizszy program prostokat o jednym boku dwukrotnie dluzszym od drugiego. Jaka wysokosc sobie zazyczysz?\n");
	printf("Podaj zatem liczbe wysokosc (liczbe gwiazdek - krotszy bok): ");
}

int podaj_naturalna(void) {
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || getchar() != '\n') {
		printf("Podaj liczbe naturalna: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return liczba;
}

void rysuj_linie(int m) {
	for (int i = 1; i <= 2 * m; i++) {
		putchar('*');
	}
}

void rysuj_kwadrat(int m) {
	for (int j = 1; j <= m; j++) {
		rysuj_linie(m);
		putchar('\n');
	}
}

int main() {
	info();
	int liczba;
	liczba = podaj_naturalna();
	printf("\nOto Twoj prostokat: \n");
	rysuj_kwadrat(liczba);
	printf("\n\nDziekuje za skorzystanie z programu! Przygotowanie: Bartosz Krassowski\n");
	return 0;
}
*/

/*
========================ZADANIE 70=========================
void info(void) {
	printf("Czolem! Ponizszy program narysuje trojkat rownoramienny z gwiazdek o dlugosci boku, jaki sobie zazyczysz.\n");
	printf("Podaj zatem liczbe gwiazdek - dlugosc boku: ");
}

int podaj_naturalna(void) {
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || getchar() != '\n') {
		printf("Podaj liczbe naturalna: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return liczba;
}

void rysuj_linie(int m) {
	for (int i = 1; i <= m; i++) {
		putchar('*');
	}
}

void rysuj_trojkat(int m) {
	for (int j = 1; j <= m; j++) {
		rysuj_linie(j);
		putchar('\n');
	}
}

int main() {
	info();
	int liczba;
	liczba = podaj_naturalna();
	printf("\nOto Twoj trojkat: \n");
	rysuj_trojkat(liczba);
	printf("\n\nDziekuje za skorzystanie z programu! Przygotowanie: Bartosz Krassowski\n");
	return 0;
}
*/

/*
========================ZADANIE 71=========================
void info(void) {
	printf("Czolem! Ponizszy program narysuje trojkat rownoramienny z gwiazdek o dlugosci boku, jaki sobie zazyczysz.\n");
	printf("Podaj zatem liczbe gwiazdek - dlugosc boku: ");
}

int podaj_naturalna(void) {
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || getchar() != '\n') {
		printf("Podaj liczbe naturalna: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return liczba;
}

void rysuj_linie(int m) {
	for (int i = 1; i <= 2*m - 1; i++) {
		putchar('*');
	}
}

void rysuj_spacje(int a) {
	for (int i = 1; i <= a; i++) {
		putchar(' ');
	}
}

int rysuj_trojkat(int m) {
	for (int j = 1; j <= m; j++) {
		int a;
		a = m - j;
		rysuj_spacje(a);
		rysuj_linie(j);
		putchar('\n');
	}
}

int main() {
	info();
	int liczba;
	int a;
	liczba = podaj_naturalna();
	printf("\nOto Twoj trojkat: \n");
	rysuj_trojkat(liczba);
	printf("\n\nDziekuje za skorzystanie z programu! Przygotowanie: Bartosz Krassowski\n");
	return 0;
}
*/

void info(int zakres) {
	printf("Czolem! Ponizszy program narysuje tabliczke mnozenia w zakresie (0-%d).\n", zakres);
	printf("Podaj zatem zakres: ");
}

int podaj_naturalna(int zakres) {
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || liczba < 0 || liczba > zakres || getchar() != '\n') {
		printf("Podaj liczbe naturalna nie wieksza niz %d: ", zakres);
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return liczba;
}

void rysuj_naglowek(int m) {
	printf("     ");
	for (int i = 1; i <= m; i++) {
		printf("%4d", i);
	}
	putchar('\n');
	for (int i = 1; i <= 4 * m + 5; i++) {
		putchar('-');
	}
	putchar('\n');
}

void rysuj_linie(int j, int liczba) {
	printf("%3d |", j);
	for (int i = 1; i <= liczba; i++) {
		printf("%4d", j * i);
	}
}

int rysuj_tabliczke(int liczba) {
	for (int j = 1; j <= liczba; j++) {
		rysuj_linie(j, liczba);
		putchar('\n');
	}
}


int main() {
	int zakres = 30;
	info(zakres);
	int liczba;
	int a;
	liczba = podaj_naturalna(zakres);
	printf("\nOto Twoja tabliczka mnozenia: \n");
	rysuj_naglowek(liczba);
	rysuj_tabliczke(liczba);
	printf("\n\nDziekuje za skorzystanie z programu! Przygotowanie: Bartosz Krassowski\n");
	return 0;
}


/*
========================ZADANIE 73=========================
void info(void) {
	printf("Czolem! Ponizszy program wypisuje znaki odpowiadajace kodom ASCII.\n");
}

void ascii(void) {
	printf("kod\tskrot\n");
	for (int i = 0; i <= 255; i++) {
		if (i == 0) printf("%d\tnul\n", i);
		else if (i == 0) printf("%d\tnul\n", i);
		else if (i == 7) printf("%d\tbel\n", i);
		else if (i == 8) printf("%d\tbs\n", i);
		else if (i == 9) printf("%d\tht\n", i);
		else if (i == 10) printf("%d\tnl\n", i);
		else if (i == 11) printf("%d\tvt\n", i);
		else if (i == 12) printf("%d\tnp\n", i);
		else if (i == 13) printf("%d\tcr\n", i);
		else if (i == 26) printf("%d\teof\n", i);
		else if (i == 27) printf("%d\tesc\n", i);
		else if (i == 127) printf("%d\tdel\n", i);
		else printf("%d\t%c\n", i, i);
		putchar('\n');
	}
}

void end(void) {
	printf("\n\nDziekuje za skorzystanie z programu! Przygotowanie: Bartosz Krassowski\n");
	return 0;
}

int main() {
	info();
	ascii();
	end();
}
*/

/*
========================ZADANIE 74=========================
void info(int zakres) {
	printf("Czolem! Ponizszy program wypisze sume 1 + 22 + 333 + ... + nn.. dla (n = 0-%d).\n", zakres);
	printf("Podaj zatem zakres: ");
}

int podaj_naturalna(int zakres) {
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || liczba < 0 || liczba > zakres || getchar() != '\n') {
		printf("Podaj liczbe naturalna nie wieksza niz %d: ", zakres);
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	return liczba;
}

void wypisz_skladnik(int j) {
	for (int i = 1; i <= j; i++) {
		printf("%d", j);
	}
}

void wypisz_sume(int liczba) {
	for (int j = 1; j <= liczba; j++) {
		wypisz_skladnik(j);
		if (j < liczba) {
			putchar(' ');
			putchar('+');
			putchar(' ');
		}
	}
}

void end(void) {
	printf("\n\nDziekuje za skorzystanie z programu! Przygotowanie: Bartosz Krassowski\n");
	return 0;
}

int main() {
	int zakres = 9;
	info(zakres);
	int liczba;
	liczba = podaj_naturalna(zakres);
	wypisz_sume(liczba);
	end();
}
*/