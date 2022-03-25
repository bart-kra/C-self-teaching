#include <stdio.h>
#include <math.h>
#include <ctype.h>

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
		char znak = getchar();https://www.msn.com/pl-pl/feed
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

/*
 ==========================ZADANIE 44====================
int main()
{
	char znak;
	printf("Ponizszy program wypisuje kod ASCII danego znaku: ");
	znak = getchar();
	printf("\n\nKod ASCII znaku %c to: %d", znak, znak);
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/

/*
 ==========================ZADANIE 45====================
int main()
{
	int kod;
	printf("Ponizszy program wypisuje znak odpowiadajacy podanemu kodowi z tablicy ASCII: ");
	while (scanf_s("%d", &kod) != 1 || kod < 0 || kod > 127 || getchar() != '\n') {
		printf("Niepoprawna wartosc! Podaj ponownie: ");
		char znak = getchar();
		while (znak != '\n')
			znak = getchar();
	}
	if (kod > 31 && kod < 127) printf("Kodowi %d odpowiada znak %c", kod, kod);
	else printf("Kod %d odpowiada znakowi kontrolnemu.", kod);
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
} 
*/

/*
 ==========================ZADANIE 46====================
int main()
{
	printf("Ponizszy program pozwala wczytac godzine i podac ja w innym formacie.\n");
	printf("\nPodaj godzine w formacie hh:mm: ");
	int godz, min;
	char znak;
	znak = getchar();
	if (znak < '0' || znak > '2') {
		printf("Pierwszy znak moze byc tylko 0, 1 lub 2.\n");
		printf("Koniec programu!!!");
		return 0;
	}
	godz = znak - '0';
	znak = getchar();
	if (!isdigit(znak)){
		printf("Drugi znak powinien byc cyfra!!!.\n");
		printf("Koniec programu!!!");
		return 0;
	}
	godz = 10 * godz + (znak - '0');
	if (godz > 23) {
		printf("Godzina powinna byc z zakresu (0-23)!!!.\n");
		printf("Koniec programu!!!");
		return 0;
	}
	if (getchar() != ':') {
		printf("Trzeci znak powienien byc dwukropkiem!!!\n");
		printf("Koniec programu!!!");
		return 0;
	}
	znak = getchar();
	if (znak < '0' || znak > '5') {
		printf("Czwarty znak musi byc (0-5).\n");
		printf("Koniec programu!!!");
		return 0;
	}
	min = znak - '0';
	znak = getchar();
	if (!isdigit(znak)) {
		printf("Czwarty znak powinien byc cyfra!!!.\n");
		printf("Koniec programu!!!");
		return 0;
	}
	min = 10 * min + (znak - '0');
	if (min > 59) {
		printf("Minuty powinny byc z zakresu (0-59)!!!.\n");
		printf("Koniec programu!!!");
		return 0;
	}
	if (getchar() != '\n') {
		printf("Szosty znak powienien byc enterem!!!\n");
		printf("Koniec programu!!!");
		return 0;
	}
	printf("Oto wczytana godzina:\n");
	if (min == 1) printf("%d minuta po %d", min, godz);
	else if (znak == '2' || znak == '3' || znak == '4') printf("%d minuty po %d", min, godz);
	else printf("%d minut po %d", min, godz);
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/

/*
 ==========================ZADANIE 47====================
int main()
{
	printf("Ponizszy program pozwala wczytac date z zakresu 2001-2050 i podac ja w innym formacie.\n");
	printf("\nPodaj date w formacie dd.mm.rr: ");
	int dzien, miesiac, rok;
	char znak;
	double przestepny;
	znak = getchar();
	if (znak < '0' || znak > '3') {
		printf("Pierwszy znak moze byc tylko 0, 1, 2 lub 3.\n");
		printf("Koniec programu!!!");
		return 0;
	}
	dzien = znak - '0';
	znak = getchar();
	if (!isdigit(znak)) {
		printf("Drugi znak powinien byc cyfra!!!.\n");
		printf("Koniec programu!!!");
		return 0;
	}
	dzien = 10 * dzien + (znak - '0');
	if (dzien > 31) {
		printf("Dzien powinien byc z zakresu (0-31)!!!.\n");
		printf("Koniec programu!!!");
		return 0;
	}
	if (getchar() != '.') {
		printf("Trzeci znak powienien byc kropka!!!\n");
		printf("Koniec programu!!!");
		return 0;
	}
	znak = getchar();
	if (znak < '0' || znak > '1') {
		printf("Czwarty znak musi byc (0-1).\n");
		printf("Koniec programu!!!");
		return 0;
	}
	miesiac = znak - '0';
	znak = getchar();
	if (!isdigit(znak)) {
		printf("Piaty znak powinien byc cyfra!!!.\n");
		printf("Koniec programu!!!");
		return 0;
	}
	miesiac = 10 * miesiac + (znak - '0');
	if (miesiac > 12) {
		printf("Miesiac powinny byc z zakresu (0-12)!!!.\n");
		printf("Koniec programu!!!");
		return 0;
	}
	if ((dzien == 31 && (miesiac == 2 || miesiac == 4 || miesiac == 6 || miesiac == 9 || miesiac == 11)) || (dzien == 30 && miesiac == 2)) {
		printf("Podany miesiac ma mniej dni!!!.\n");
		printf("Koniec programu!!!");
		return 0;
	}
	if (getchar() != '.') {
		printf("Szosty znak powienien byc kropka!!!\n");
		printf("Koniec programu!!!");
		return 0;
	}
	znak = getchar();
	if (znak < '0' || znak > '5') {
		printf("Siodmy znak musi byc (0-5).\n");
		printf("Koniec programu!!!");
		return 0;
	}
	rok = znak - '0';
	znak = getchar();
	if (!isdigit(znak)) {
		printf("Osmy znak powinien byc cyfra!!!.\n");
		printf("Koniec programu!!!");
		return 0;
	}
	rok = 2000 + 10 * rok + (znak - '0');
	if (rok > 2050) {
		printf("Rok powinien byc z zakresu (0-50)!!!.\n");
		printf("Koniec programu!!!");
		return 0;
	}
	przestepny = floor(rok/4);
	if (dzien == 29 && miesiac == 2 && przestepny != 0) {
		printf("Rok nie jest przestepny wiec luty nie moze miec 29 dni!!!.\n");
		printf("Koniec programu!!!");
	}
	printf("Oto wczytana data:\n");
	if (miesiac == 1) printf("%d stycznia %d", dzien, rok);
	else if (miesiac == 2) printf("%d lutego %d", dzien, rok);
	else if (miesiac == 3) printf("%d marca %d", dzien, rok);
	else if (miesiac == 4) printf("%d kwietnia %d", dzien, rok);
	else if (miesiac == 5) printf("%d maja %d", dzien, rok);
	else if (miesiac == 6) printf("%d czerwca %d", dzien, rok);
	else if (miesiac == 7) printf("%d lipca %d", dzien, rok);
	else if (miesiac == 8) printf("%d sierpnia %d", dzien, rok);
	else if (miesiac == 9) printf("%d wrzesnia %d", dzien, rok);
	else if (miesiac == 10) printf("%d pazdziernika %d", dzien, rok);
	else if (miesiac == 11) printf("%d listopada %d", dzien, rok);
	else printf("%d grudnia %d", dzien, rok);
	printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
	return 0;
}
*/

int main() {
	char znak;
	znak = getchar();
	printf("%c to %d", znak, znak);
	return 0;
}

