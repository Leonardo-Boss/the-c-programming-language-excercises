#include <stdio.h>

int
main()
{
    float fahr, celsius;
    int begin, end, incr;

    begin = 300;
    end = 0;
    incr = 20;

     fahr = begin;
     printf("fahr celsius\n");
     while (fahr >= end) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr - incr;
     }
}
