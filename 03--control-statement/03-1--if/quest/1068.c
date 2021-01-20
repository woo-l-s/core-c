/**
 * [1068](https://codeup.kr/problem.php?id=1068)
 * [기초-조건/선택실행구조] 정수 1개 입력받아 평가 출력하기
 * 
 * 문제 설명
 * 점수(정수, 0 ~ 100)를 입력받아 평가를 출력해보자.
 * 
 * 평가 기준
 * 점수 범위 : 평가
 *  90 ~ 100 : A
 *  70 ~  89 : B
 *  40 ~  69 : C
 *   0 ~  39 : D
 * 로 평가되어야 한다.
 * 
 * 입력
 * 정수(0 ~ 100) 1개가 입력된다.
 * 
 * 출력
 * 평가 결과를 출력한다.
 * 
 * 입력 예시
 * 73
 * 
 * 출력 예시
 * B
 */
#include <stdio.h>

int main()
{
    unsigned int score;
    scanf("%u", &score);

    if (score >= 90 && score <= 100) {
        putchar('A');
    // } else if (score >= 80 && score <= 90) {
    } else if (score >= 70) {
        putchar('B');
    } else if (score >= 40) {
        putchar('C');
    } else {
        putchar('D');
    }

    return 0;
}
