#include <stdio.h>


int demKyTu(char *chuoi) {
    int dem = 0;
    char *ptr = chuoi;

    while (*ptr != '\0') {
        dem++;
        ptr++;
    }

    return dem;
}

int main() {
    char chuoi[100];

 
    printf("Nhap chuoi ky tu: ");
    scanf("%s", chuoi);

 
    int soKyTu = demKyTu(chuoi);

    printf("So ky tu trong chuoi la: %d\n", soKyTu);

    return 0;
}
