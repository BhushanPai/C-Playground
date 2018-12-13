#include <stdio.h>

int main() {
	// Variables can only be declared at the beginning of the scope.
	int num = 0;
	int num2 = 0;
	for (num = 0; num < 10; ++num) {
		for (num2 = num; num2 >= 0; --num2) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
