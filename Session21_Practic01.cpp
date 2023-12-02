#include <stdio.h>
    
 
    void hoanDoi(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    
    int main() {
        int x, y;
    
  
        printf("Nhap gia tri cho bien x: ");
        scanf("%d", &x);
        printf("Nhap gia tri cho bien y: ");
        scanf("%d", &y);
    
        printf("Gia tri truoc khi hoan doi: x = %d, y = %d\n", x, y);
    
  
        hoanDoi(&x, &y);
    
        printf("Gia tri sau khi hoan doi: x = %d, y = %d\n", x, y);
    
        return 0;
    }

