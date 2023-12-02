#include<stdio.h>
int main(){
	int numbers;
	printf("Nhap vao gia tri n: ");
	scanf("%d",&numbers);
	int *prt = &numbers;
	printf("Gia tri cua n la %d\n",numbers);
	printf("Dia chi cua gia tri n la %d",*prt);
	return 0;
}
