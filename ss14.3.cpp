#include<stdio.h>
#include<string.h>

void compare(char str1[], char str2[]){
	if(strlen(str1)<strlen(str2)){
		printf("Chuoi 2 co do dai lon hon");
	}else{
		printf("Chuoi 1 co do dai lon hon");
	}
}

int main(){
	char str1[100],str2[100];
	printf("Nhap chuoi 1: ");
	gets(str1);
	printf("Nhap chuoi 2: ");
	gets(str2);
	compare(str1,str2);
	return 0; 
}
