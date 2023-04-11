#include <stdio.h>

int main() {
	
	char name[10]="";
	char age[10]="";
	char star[7]="";
	
	printf("이름을 입력 : ");
	scanf("%s", name);
	printf("나이를 입력 : ");
	scanf("%s", &age);
	printf("성별을 입력 : ");
	scanf("%s", star);
	
	
	printf("%s\n", name);
	printf("%s\n", age);
	printf("%s\n", star);
	
	return 0;
}