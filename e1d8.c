#include <stdio.h>

int
main()
{
    int c;
    int tb = 0;
    int sp = 0;
    int nl = 0;
    while ((c = getchar()) != EOF)
    {
        switch (c) {
            case '\t':
                tb++;
                break;
            case ' ':
                sp++;
                break;
            case '\n':
                nl++;
                break;
        }
    }
    printf("tabs:\t\t%d\nspaces:\t\t%d\nnew lines:\t%d\n", tb, sp, nl);
}
