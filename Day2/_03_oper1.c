#include <stdio.h>

void main3() {
	int num1 = 0, num2 = 0;
	char name[50];
	// 학습지 사칙연산
	// 이름을 입력하세요 (출력)
	// 이름 (입력)
	printf("이름을 입력하세요 : ");
	scanf("%s", &name);

	// 1+1
	printf("1+1 =");
	scanf("%d", &num1);
	printf("1+1=%d", num1);

	// 2-1
	printf("2-1 =");
	scanf("%d", &num1);
	// 3*3
	printf("3×3 =");
	scanf("%d", &num1);
	// 10/2
	printf("10÷2 =");
	scanf("%d", &num1);

	printf("1+1=2 \n", num1);
	printf("2-1=1 \n", num1);
	printf("3×3=9 \n", num1);
	printf("10÷2=5 \n", num1);

	// +, -, *, / 
	// 대입 =
	// % 나머지 구하기
}