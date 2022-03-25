#include <stdio.h>
#include <math.h>




/*
==========================ZADANIE 8-9====================
int main()
{
	printf("Oto jak dzialaja modyfikatory: \n\n");
	printf("\n%4d%6d%10d",-11, 0, 11111);
	printf("\n%+4d%+6d%+10d",-11, 0, 11111);
	printf("\n%-4d%-6d%-10d",-11, 0, 11111);
	printf("\n%04d%06d%010d",-11, 0, 11111);
	printf("\n% 4d% 6d% 10d",-11, 0, 11111);
	printf("\n\nKoniec programu.\n");
	return 0;
}
*/

/*
==========================ZADANIE 10====================
int main()
{
	putchar('x');
	putchar(':');
	putchar('\t');
	putchar('f');
	putchar('(');
	putchar('x');
	putchar(')');
	putchar(':');
	putchar('\n');
	putchar('3');
	putchar('\t');
	putchar('5');
	printf("\n\nKoniec programu.\n");
	return 0;
}
*/

/*
==========================ZADANIE 11====================
int main()
{
	printf("Oto liczba -5 wypisana na 6 sposobow: \n");
	printf("d: %d\n",-5);
	printf("d: %o\n",-5);
	printf("d: %u\n",-5);
	printf("d: %lf\n",-5);
	printf("d: %le\n",-5);
	printf("d: %lg\n",-5);
	printf("d: %s\n",-5);
	printf("\n\nKoniec programu.\n");
	return 0;
}

/*Oto liczba -5 wypisana na 6 sposobow:
d: -5
d: 37777777773
d: 4294967291
d: 0.000000
d: 4.180782e-308
d: 4.18078e-308
dla %s wystapil punkt przerwania i program przestal dzialac*/

/*
==========================ZADANIE 11====================
int main()
{
	printf("Oto liczba -5.0 wypisana na 6 sposobow: \n");
	printf("d: %d\n", -5.0);
	printf("d: %o\n", -5.0);
	printf("d: %u\n", -5.0);
	printf("d: %lf\n", -5.0);
	printf("d: %le\n", -5.0);
	printf("d: %lg\n", -5.0);
	printf("d: %s\n", -5);
	printf("\n\nKoniec programu.\n");
	return 0;
}
*/
/*Oto liczba - 5.0 wypisana na 6 sposobow:
d: 0
d : 0
d : 0
d : -5.000000
d : -5.000000e+00
d : -5
dla %s wystapil punkt przerwania i program przestal dzialac*/

/*
==========================ZADANIE 13====================
int main()
{
	printf("Oba argumenty w dzialaniach sa zmiennopozycyjne (liczby w postaci 2.0, 3.0), format wpisywania wyniku zmiennopozycyjny (znak przeksztalcenia lf)\n\n");
	printf("%d+%d=%lf\n", 2, 3, 2.0 + 3.0);
	printf("%d-%d=%lf\n", 2, 3, 2.0 - 3.0);
	printf("%d*%d=%lf\n", 2, 3, 2.0 * 3.0);
	printf("%d/%d=%lf\n", 2, 3, 2.0 / 3.0);
	printf("%d/%d=%lf\n", 3, 2, 3.0 / 2.0);

	printf("\n\nOba argumenty w dzialaniach sa calkowite (liczby w postaci 2, 3), format wpisywania wyniku calkowity (znak przeksztalcenia d)\n\n");
	printf("%d+%d=%d\n", 2, 3, 2 + 3);
	printf("%d-%d=%d\n", 2, 3, 2 - 3);
	printf("%d*%d=%d\n", 2, 3, 2 * 3);
	printf("%d/%d=%d\n", 2, 3, 2 / 3); /*zle
	printf("%d/%d=%d\n", 3, 2, 3 / 2); /*zle

	printf("\n\nJeden z argumentow zmiennopozycyjny a drugi - calkowity, format wpisywania wyniku zmiennopozycyjny (znak przeksztalcenia lf)\n\n");
	printf("%d+%d=%lf\n", 2, 3, 2.0 + 3);
	printf("%d-%d=%lf\n", 2, 3, 2.0 - 3);
	printf("%d*%d=%lf\n", 2, 3, 2.0 * 3);
	printf("%d/%d=%lf\n", 2, 3, 2.0 / 3);
	printf("%d/%d=%lf\n", 3, 2, 3.0 / 2);

	printf("\n\nJeden z argumentow zmiennopozycyjny a drugi - calkowity, format wpisywania wyniku calkowity (znak przeksztalcenia d)\n\n");
	printf("%d+%d=%d\n", 2, 3, 2.0 + 3); /*zle
	printf("%d-%d=%d\n", 2, 3, 2.0 - 3); /*zle
	printf("%d*%d=%d\n", 2, 3, 2.0 * 3); /*zle
	printf("%d/%d=%d\n", 2, 3, 2.0 / 3); /*zle
	printf("%d/%d=%d\n", 3, 2, 3.0 / 2); /*zle
	return 0;
	
}
*/

/*
==========================ZADANIE 14====================
int main()
{
	printf("%s\n", "ala");
	printf("%s\n", ’ala’);
	printf("%s\n", ala);
	printf("%s\n""ala");
	printf("%s\n", "5");
	printf("%s\n", ’5’);
	printf("%s\n", 5);
	return 0;
}
*/
/*
1. ok
2. Format %s wymaga argumentu char a podano int
3. Format %s wymaga argumentu char a podano int
4. ok
5. ok
6.Format %s wymaga argumentu char a podano int
7. Nieobsluzony wyjatek w lokalizacji 0x790928BC (ucrtbased.dll) w Project1.exe: 0xC0000005: Naruszenie zasad dostepu podczas odczytywania w lokalizacji 0x00000005.
*/

/*
==========================ZADANIE 15====================
int main()
{
	printf("Sekwencja specjalna\"tekst za nia.\n");
	return 0;
}
/*
\n Tekst przeniesiony do kolejnego wiersza
\t Dalsza czesc tekstu po tabulatorze
\v Pojawil sie smieszny znaczek w ciagu tekstu
\b Zniknela ostatnia litera slowa .specjalna.
\r Konstrukcja zdania rozsypala sie
\f Inne smieszny znaczek - przecowny do pkt 3
\a Kod nie spodobal sie debuggerowi ale ostatecznie przeszedl a w tekscie nie wydarzylo sie nic niespodziewanego
\\ Slash wystepuje jako element zdania
\? Analogicznie
\' ---
\" ---
*/

/*
==========================ZADANIE 16====================
int main()
{
	printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n");
	printf("Czy \"a\" oznacza w C to samo co \'a\'?\n");
	printf("/////////////////////////////////// \n");
	printf("\a");
	return 0;
}
*/