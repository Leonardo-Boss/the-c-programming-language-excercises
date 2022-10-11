#include <stdio.h>

int
main()
{
    float fahr, celsius;
    int begin, end, incr;

    begin = 0;
    end = 300;
    incr = 20;

     celsius = begin;
     printf("celsius fahr\n");
     while (celsius <= end) {
        fahr = 32.0 + (9.0/5.0) * celsius;
        printf("%7.0f %6.1f\n", celsius, fahr);
        celsius = celsius + incr;
     }
}
