# Core C Programming

## Table of Contents
0. OT 및 개발 환경 구축
1. 데이터와 표준 입출력
2. 연산자
3. 제어문
4. 함수
5. 1차원 배열
6. 포인터
7. 문자열
8. 포인터 응용
9. 메모리 동적 할당
10. 구조체
11. 파일 입출력
12. 전처리와 분할 컴파일

## 개발 환경 구축하기
코딩을 할 때 가장 먼저 해야 할 일은 내 PC에서 개발을 편하게 할 수 있도록 컴퓨터 환경을 만들어줘야 합니다.  
C 프로그래밍을 하기 위해 몇 가지 유용한 도구(Tools)들을 소개할 텐데, 설치할 항목은 다음과 같습니다.

1. Visual Studio Code
2. git
3. MinGW



## Visual Studio Code 설치
[비주얼 스튜디오 코드](https://namu.wiki/w/%EB%B9%84%EC%A3%BC%EC%96%BC%20%EC%8A%A4%ED%8A%9C%EB%94%94%EC%98%A4%20%EC%BD%94%EB%93%9C)는 Windows의 메모장과 같은 텍스트 에디터 중 하나입니다.  
프로그램이 가볍고 저사양에서도 무리 없이 실행되기 때문에 널리 사랑받는 도구 중 하나입니다.  
단, [통합 개발 환경](https://namu.wiki/w/%ED%86%B5%ED%95%A9%20%EA%B0%9C%EB%B0%9C%20%ED%99%98%EA%B2%BD)(IDE)가 아니므로 별도의 컴파일 환경을 만들어줘야 합니다.


### Hello, World 작성
```c
#include <stdio.h>

void main()
{
    puts("Hello, World!");
}
```


### 확장 플러그인 설치
[파일(F)] - [기본 설정] - [확장 **(Ctrl + Shift + X)**] 으로 가서 다음 확장 프로그램을 설치합니다.
- C/C++
- Code Runner



## git 설치
### 기본 셸을 bash로 변경



## MinGW 설치
### 시스템 환경 변수에 등록


### C 컴파일러 버전 확인
```bash
gcc --version
```


### C++ 컴파일러 버전 확인
```bash
g++ --version
```


## 코드 실행(Ctrl + Alt + N)
이제 비주얼 스튜디오 돌아가서 아까 설치한 Code Runner를 통해 샘플 코드 `hello.c` 를 실행합니다.
