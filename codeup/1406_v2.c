#include <stdio.h>
#include <string.h>

int main()
{
    char word[46];
    scanf("%s", word);

    /**
     * strcmp: 두 문자열이 같다면 0을 반환하고 다르면 0이 아닌 값을 반환(인자 값의 위치는 상관 없음)
     * @see https://docs.microsoft.com/ko-kr/cpp/c-runtime-library/reference/strcmp-wcscmp-mbscmp?view=msvc-160
     * @see https://www.programiz.com/c-programming/library-function/string.h/strcmp
     */
    if (strcmp(word, "love") == 0) {
        puts("I love you.");
    }
    return 0;
}
