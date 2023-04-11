#include <stdio.h>

int main() {
	
	unsigned int num = 2147483647;
	unsigned int num2 = 0;
	long long num3 = 0;
	num2 = num + 1;
	
	printf("%u\n", num);
	printf("%u\n", num2);
	printf("%d\n", sizeof(num3));
	
	return 0;
}