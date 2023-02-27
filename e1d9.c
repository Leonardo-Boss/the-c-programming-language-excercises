#include <stdio.h>

#define false 0;
#define true 1;
// write a program that copies entry to exit removing excess spaces
int
main()
{
    int c;
    int last_is_space = false;
    while (EOF != (c = getchar())) {
        if (c == ' ')
        {
            if (last_is_space)
                continue;
            last_is_space = true;
        }
        printf("%c", c);
    }
}
