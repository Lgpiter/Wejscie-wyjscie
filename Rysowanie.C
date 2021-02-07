//program sluzacy do rysowania ksiazka Stephana Prata strona 252
#include <stdio.h>
#include <ctype.h>

#define PRAWDA 1
#define FALSZ 0
#define MAXDLUG 80

int zlegranice(int poczatek, int koniec, int granica);
void wyswietl(char c, int pierwszy, int ostatni);

int main()
{
    int ch;
    int start,stop;

    
    printf("Podaj znak i polozenia zgodznie z tym ");
    printf ("przykladem: D 3 21\n");
    
    while ((ch = getchar()) != EOF)
    {
        if (isspace(ch))
            continue;
        if (scanf("%d %d", &start, &stop) != 2)
            break;
        if (zlegranice(start, stop, MAXDLUG) == PRAWDA)
            printf ("Podales nieprawidlowe granice");
        else
            wyswietl(ch, start, stop);
    }
    return 0;
}

int zlegranice(int poczatek, int koniec, int granica)
{
    if (poczatek > koniec || poczatek < 1 || koniec > granica)
        return PRAWDA;
    else
        return FALSZ;
}

void wyswietl(char c, int pierwszy, int ostatni)
{
    int kolumna;
    
    for (kolumna = 1 ; kolumna < pierwszy; kolumna++)
    {
        putchar(' ');
    }
    for (kolumna = pierwszy; kolumna <= ostatni; kolumna++)
    {
        putchar(c);
    }
    putchar('\n');
}
