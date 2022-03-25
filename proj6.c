#include <stdio.h>
#include <math.h>


/*
========================ZADANIE 48=========================
int main() {
    int i = 0;
    int liczba = 2;
    printf("Ponizszy program probuje wypisac 50 kolejnych poteg dwojki korzystajac jedynie ze zmiennych typu int");
    while (i < 50) {
        i++;
        printf("%d.%d\n", i, liczba);
        liczba = liczba * 2;
    }
    printf("Niestety, programowi siê nie udalo gdyz int ma zbyt mala pojemnosc\n");
    printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
    return 0;
}
*/

/*
========================ZADANIE 49=========================
int main() {
    int i = 0;
    int liczba = 1;
    printf("Ponizszy program probuje wypisac 20 kolejnych silni korzystajac jedynie ze zmiennych typu int\n");
    while (i < 20) {
        i++;
        printf("%d.%d\n", i, liczba);
        liczba = liczba * i;
    }
    printf("Niestety, programowi sie nie udalo gdyz int ma zbyt mala pojemnosc\n");
    printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
    return 0;
}
*/

/*
========================ZADANIE 50=========================
int main() {
    int i = 1;
    int j;
    double fn;
    double mianownik, licznik;
    printf("Ponizszy program probuje wypisac wartosc funkcji f(n) dla n=1,...,200\n");
    while (i <= 200) {
        j = 1;
        mianownik = 1;
        licznik = 1;
        while (j <= i + 1) {
            mianownik = mianownik * j;
            j++;
        }
        j = 1;
        while (j <= i) {
            licznik = licznik * 3;
            j++;
        }
        fn = licznik / mianownik;
        printf("%d.   %le\n", i, fn);
        i++;
    }
    printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
    return 0;
}
*/

/*
========================ZADANIE 51=========================
int main() {
    int i = 1;
    int j;
    double fn=2;
    double mianownik, licznik;
    printf("Ponizszy program wypisuje najmniejsza liczbe naturalna dla ktorej wartosc funkcji fn jest mniejsza od 1.\n");
    while (fn>1) {
        j = 1;
        mianownik = 1;
        licznik = 1;
        while (j <= i + 1) {
            mianownik = mianownik * j;
            j++;
        }
        j = 1;
        while (j <= i) {
            licznik = licznik * 90;
            j++;
        }
        fn = licznik / mianownik;
        i++;
    }
    printf("%d", i);
    printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
    return 0;
}
*/

/*
========================ZADANIE 53=========================
int main() {
    int naturalna;

    printf("Program czeka na liczbe naturalna. \n\n");
    printf("Podaj liczbe naturalna: n=");
    while (scanf_s("%d", &naturalna) != 1 || naturalna < 0 || getchar() != '\n') {
        printf("Przeciez liczby naturalne to (0, 1, 2,...). Podaj jeszcze raz! n=");
        char znak = getchar();
        while (znak != '\n')
            znak = getchar();
    }
    printf("\nPodana liczba to: %d", naturalna);
    printf("\n\nDzieki za wspolprace, trzymaj sie!\nProgram napisany przez Bartosza Krassowskiego\n");
    return 0;

}
*/

int main() {
    char znak;

    printf("Wcisnij t: ");
    znak = getchar();
    while (getchar() != 't' || getchar != '\n') {
        printf("To nie jest literka t. Sprobuj ponownie: ");
        char znaka = getchar();
        while (znaka != 'n')
            znaka = getchar();
    }
    printf("Wcisnieto t!");
    return 0;
}