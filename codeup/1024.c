#include <stdio.h>

int main(void)
{
    char str[21];
    int i;

    scanf("%s", str);
    i = 0;
    while (str[i])
    {
        printf("\'%c\'\n", str[i]);
        i += 1;
    }

    return 0;
}
