#include <stdio.h>
int factorial(int n) {
	int i;
	int result=1;

	for (i = n; i >= 1; i--) {
		result *= i;
		
	}
	
	return result;
}

int main(void) {
	int n;
	int result ;

	scanf_s("%d", &n);

	result =factorial(n);

	printf("%d", result);

	return 0;
}