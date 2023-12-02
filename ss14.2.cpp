#include<stdio.h>
void swap(int *a,int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a,b;
    printf("nhap a va b: ");
    scanf("%d %d",&a,&b);
    printf("Hieu truoc khi doi:");
    printf("%d - %d = %d\n",a,b,a-b);
    swap(&a,&b);
    printf("Hieu sau khi doi:");
    printf("%d - %d = %d\n",a,b,a-b);
}
