#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b))

int main(void)
{
	int num1, num2;
	printf("input integers: ");
	scanf("%d %d", &num1, &num2);
	printf("MAX: %d \n", MAX(num1, num2));

	return 0;
}