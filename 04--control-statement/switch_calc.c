#include <stdio.h>

int main()
{
    int num1, num2;
    char opr;

    printf("피연산자 num1을 입력하세요: ");
    scanf("%d", &num1);

//    rewind(stdin);

    printf("연산자를 입력하세요(+, -, *, /, %%): ");
    scanf("%c", &opr);

    printf("피연산자 num2를 입력하세요: ");
    scanf("%d", &num2);

    switch (opr)
    {
    case '+':
        printf("%d %c %d = %d", num1, opr, num2, num1 + num2);
        break;
    case '-':
        printf("%d %c %d = %d", num1, opr, num2, num1 - num2);
        break;
    case '*':
        printf("%d %c %d = %d", num1, opr, num2, num1 * num2);
        break;
    case '/':
        printf("%d %c %d = %f", num1, opr, num2, (float)num1 / num2);
        break;
    default:
        puts("수식을 잘못 입력했습니다!");
        break;
    }

    return 0;
}
