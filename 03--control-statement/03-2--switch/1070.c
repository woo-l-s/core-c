/**
 * [1070](https://codeup.kr/problem.php?id=1070)
 * [기초-조건/선택실행구조] 월 입력받아 계절 출력하기
 * 
 * 문제 설명
 * 월이 입력될 때 계절 이름이 출력되도록 해보자.
 * 
 * 예
 * 월 : 계절 이름
 * 12,  1,  2 : winter
 *  3,  4,  5 : spring
 *  6,  7,  8 : summer
 *  9, 10, 11 : fall
 * 
 * 입력
 * 월을 의미하는 1개의 정수가 입력된다.(1 ~ 12)
 * 
 * 출력
 * 계절 이름을 출력한다.
 * 
 * 입력 예시
 * 12
 * 
 * 출력 예시
 * winter
 */
#include <stdio.h>

int main()
{
    unsigned int month;
    scanf("%u", &month);

    switch (month)
    {
    case 12:
    case 1:
    case 2:
        puts("winter");
        break;
    case 3:
    case 4:
    case 5:
        puts("spring");
        break;
    case 6:
    case 7:
    case 8:
        puts("summer");
        break;
    case 9:
    case 10:
    case 11:
        puts("fall");
        break;
    default:
        return;
    }

    return 0;
}
