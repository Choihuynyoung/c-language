#include<stdio.h>
int main() {
	
	int num1 = 14;
	int num2 = 24;
	int num3 = 8;
	int num4 = 3;
    int sum = 0;
	
	sum = num1 + num2 - num3 * num4;
	printf("%d + %d - %d * %d = %d \n", num1, num2, num3, num4, sum);
	
	return 0;
}