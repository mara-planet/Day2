#include <stdio.h>

void main3() {
	int num1 = 0, num2 = 0;
	char name[50];
	// �н��� ��Ģ����
	// �̸��� �Է��ϼ��� (���)
	// �̸� (�Է�)
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", &name);

	// 1+1
	printf("1+1 =");
	scanf("%d", &num1);
	printf("1+1=%d", num1);

	// 2-1
	printf("2-1 =");
	scanf("%d", &num1);
	// 3*3
	printf("3��3 =");
	scanf("%d", &num1);
	// 10/2
	printf("10��2 =");
	scanf("%d", &num1);

	printf("1+1=2 \n", num1);
	printf("2-1=1 \n", num1);
	printf("3��3=9 \n", num1);
	printf("10��2=5 \n", num1);

	// +, -, *, / 
	// ���� =
	// % ������ ���ϱ�
}