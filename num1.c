#include <stdio.h>
#define put "�Է��ϼ���==>"

int main(void) {
	char name[15],num[15];
	char blood[2];
	
	float left, right;
	printf("�̸��� " put);
	scanf("%s", &name);
	printf("�й��� " put);
	scanf("%s", &num);
	printf("���� �÷��� " put);
	scanf("%f", &left);
	printf("������ �÷��� " put);
	scanf("%f", &right);
	printf("�������� " put);
	scanf("%s", &blood);

	printf("==========������===========\n");
	printf("�̸� : %s\n",name);
	printf("�й� : %s\n",num);
	printf("������ �÷� : %.1f\n",right);
	printf("���� �÷� : %.1f\n",left);
	printf("������ : %s \n",blood);
	printf("==========================\n");

	return 0;
}