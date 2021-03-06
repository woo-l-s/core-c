/**
 * [1069](https://codeup.kr/problem.php?id=1069)
 * [기초-조건/선택실행구조] 평가 입력받아 다르게 출력하기
 * 
 * 문제 설명
 * 평가를 문자(A, B, C, D, ...)로 입력받아 내용을 다르게 출력해보자.
 * 
 * 평가 내용 기준
 * 평가 : 내용
 * A : best!!!
 * B : good!!
 * C : run!
 * D : slowly~
 * 나머지 문자들 : what?
 * 
 * 입력
 * 영문자 1개가 입력된다.
 * (A, B, C, D 등의 한 문자가 입력된다.)
 * 
 * 출력
 * 평가내용에 따라 다른 내용이 출력된다.
 * 
 * 입력 예시
 * A
 * 
 * 출력 예시
 * best!!!
 */
#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    // Case 1: if
    if (ch == 'A') {
        puts("best!!!");
    } else if (ch == 'B') {
        puts("good!!");
    } else if (ch == 'C') {
        puts("run!");
    } else if (ch == 'D') {
        puts("slowly~");
    } else {
        puts("what?");
    }

    return 0;
}
