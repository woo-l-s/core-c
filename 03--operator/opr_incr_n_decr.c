#include <stdio.h>

int main()
{
    int a = 5, b = 7, c = 8, d = 9, e;

    e = ++a && ++b || ++c && ++d;
    puts("Quiz 1.");
    puts("a\tb\tc\td\te");
    printf("%d\t%d\t%d\t%d\t%d\n", a, b, c, d, e);

    puts("---------------------------------");

    a = 5, b = 7, c = 8, d = 9;

    e = ++a || ++b && ++c || ++d;
    puts("Quiz 2.");
    puts("a\tb\tc\td\te");
    printf("%d\t%d\t%d\t%d\t%d\n", a, b, c, d, e);

    return 0;
}
