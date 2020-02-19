#include <stdio.h>
#define put "입력하세요==>"

int main(void) {
	char name[15],num[15];
	char blood[2];
	
	float left, right;
	printf("이름을 " put);
	scanf("%s", &name);
	printf("학번을 " put);
	scanf("%s", &num);
	printf("왼쪽 시력을 " put);
	scanf("%f", &left);
	printf("오른쪽 시력을 " put);
	scanf("%f", &right);
	printf("혈액형을 " put);
	scanf("%s", &blood);

	printf("==========프로필===========\n");
	printf("이름 : %s\n",name);
	printf("학번 : %s\n",num);
	printf("오른쪽 시력 : %.1f\n",right);
	printf("왼쪽 시력 : %.1f\n",left);
	printf("혈액형 : %s \n",blood);
	printf("==========================\n");

	return 0;
}