#include <stdio.h>
//program zgaduje o jakie liczbe mysli uzytkownik

int main()
{
    int proba = 1;
    int pom;
    int polowa_min = 0;
    int polowa_max = 100;
    char odpowiedz;
    
    printf ("Wybierz liczbe od 1 do 100. Sprobuje ja zgadnac\n");
    printf ("Wpisz t jesli podane zdanie jest prawda lub ");
    printf ("n jesli nie jest prawda \n");
    printf ("Hmm... czy Twoja liczba jest wieksza niz %d?\n",(polowa_min + polowa_max)/2);
    
    
    while((odpowiedz = getchar()) != '#')
    { 
        if (odpowiedz == 'n')
        {
                polowa_max = (polowa_min + polowa_max)/2;
                printf ("No dobrze, a zatem czy Twoja liczba jest wieksza niz %d?\n",(polowa_min + polowa_max)/2);
        }
        else if (odpowiedz == 't')
        {
                polowa_min =(polowa_min + polowa_max)/2;
                printf ("No dobrze, a zatem czy Twoja liczba jest wieksza niz %d?\n",(polowa_min + polowa_max)/2);
        }
        else
            printf ("znam tylko t lub d\n");
        
        while (getchar() != '\n')
            continue;
        
        pom = polowa_max - polowa_min;
       
        if (pom == 1)
            break;
    }
    
    printf ("Czy ta liczba to %d?\n", polowa_min);
    odpowiedz = getchar();
    if (odpowiedz == 't')
    {
        printf ("Czyli zgadlem odpowiedz!\n");
    }
    else if (odpowiedz == 'n')
    {
        printf ("A zatem liczba o ktorej pomyslales to %d\n",polowa_max);

    }
    else
    {
        printf("CHCIALES OSZUKAC PROGRAM, A WIEC PROGRAM OSZUKA CIEBIE I SIE WYLACZY\n");
        return 0;
    }
}
