#include <stdio.h>

void main2() {
	int 숫자;                 // %d
 	//char 문자;                // %c
	char 문자열[100];         // %s
	float 실수;               // %f

	// 입력
	printf("숫자를 입력하세요 : ");
	scanf("%d", &숫자);

	// printf("문자를 입력하세요 : ");
	// scanf("%c", &문자);
	printf("실수를 입력하세요 : ");
	scanf("%f", &실수);

	printf("문자열을 입력하세요 : ");
	scanf("%s", &문자열);

	//출력
	printf("당신이 입력한 숫자는 %d 입니다. \n", 숫자);
	printf("당신이 입력한 문자열은 %s 입니다. \n", 문자열);
	printf("당신이 입력한 실수는 %f 입니다. \n", 실수);

}