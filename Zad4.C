#include <stdio.h>
#include <ctype.h>

//program oblicza srednia liczbe liter w slowie

int main()
{
    float ile_liter = 0;
    float ile_slow = 0;
    float wynik;
    char pom = getchar();
    
    while (pom != EOF)
    {
        if(isalpha(pom))
        {
            ile_liter++;
        }
        if (isspace(pom))
        {
            ile_slow++;
        }
        pom = getchar();
    }
    
    wynik = (ile_liter)/(ile_slow);
    printf ("LICZBA LITER: %.0f, LICZBA SLOW %.0f\n",ile_liter,ile_slow);
    printf ("Srednia liczba liter w slowie to: %0.2f\n",wynik);
}
