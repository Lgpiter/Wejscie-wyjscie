#include <stdio.h>
#include <ctype.h>
//program zlicza duze i male litery w tekscie
int main()
{
    int licznik_malych = 0;
    int licznik_duzych = 0;
    char pom = getchar();
    
    while (pom != EOF)
    {
        if (isupper(pom))
            licznik_duzych++;
        if (islower(pom))
            licznik_malych++;
        pom = getchar();
    }
    printf ("\nIlosc wielkich liter w tekscie: %d\nilosc malych liter w tekscie: %d\n", licznik_duzych,licznik_malych);
}
