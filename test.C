#include <stdio.h>
//opisane w Stephan Prat na stronie 245
int main()
{
    char ch ;
    int index;
    int chnum;

    
    while ((ch = getchar()) != '\n')
    {
        chnum = ch % 26;
        index = 0;
        while (index < ( 30 - chnum))
        {
            index++;
            putchar(' ');
        }
        index = 0;
        while (index < (2*chnum + 1))
        {
            index++;
            putchar(ch);
        }
        putchar('\n');
    }
    return 0;
}
