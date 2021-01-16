#include <stdio.h>
int main() {
	char str[100];
	int a, b;
	int i;

	scanf("%s", str);
	scanf("%d %d", &a, &b);

	for (i = a - 1; i <= b - 1; i++) {
		printf("%c", str[i]);
	}

	return 0;
}