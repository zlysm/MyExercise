#include <stdio.h>

double factorial(int num);

int main(void) {
	int num;

	printf("Please input a number :\n");
	scanf_s("%d", &num);

	printf("factorial of %d equals to %f", num, factorial(num));
	return 0;
}

double factorial(int num) {
	double factor = 1;

	while (num >= 1) {
		factor *= num;
		num -= 1;
	}

	return factor;
}
