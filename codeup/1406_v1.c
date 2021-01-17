#include <stdio.h>

int main()
{
    char word[46];
    scanf("%s", word);
    if (word[0] == 'l' && word[1] == 'o' && word[2] == 'v' && word[3] == 'e' && word[4] == '\0') {
        puts("I love you.");
    }
    return 0;
}
