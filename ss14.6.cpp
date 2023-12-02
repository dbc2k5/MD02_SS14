#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Hàm sao chép chuoi vào mot chuoi khác
void saoChepChuoi(char *chuoi, char *chuoiSaoChep) {
    while (*chuoiSaoChep != '\0') {
        *chuoi = *chuoiSaoChep;
        chuoi++;
        chuoiSaoChep++;
    }
    *chuoi = '\0'; // Ket thúc chuoi
}
// Hàm thêm chuio vào chuoi ban dau
void themChuoi(char *chuoi, char *chuoiThem) {
    while (*chuoi != '\0') {
        chuoi++;
    }
    while (*chuoiThem != '\0') {
        *chuoi = *chuoiThem;
        chuoi++;
        chuoiThem++;
    }
    *chuoi = '\0'; // Ket thúc chuoi
}
// Hàm so sánh chuoi
int soSanhChuoi(char *chuoi1, char *chuoi2) {
    while (*chuoi1 != '\0' && *chuoi2 != '\0' && *chuoi1 == *chuoi2) {
        chuoi1++;
        chuoi2++;
    }
    return (*chuoi1 - *chuoi2);
}
// Hàm dao nguoc chuoi
void daoNguocChuoi(char *chuoi) {
    int doDai = strlen(chuoi);
    char temp;
    for (int i = 0; i < doDai / 2; i++) {
        temp = *(chuoi + i);
        *(chuoi + i) = *(chuoi + doDai - 1 - i);
        *(chuoi + doDai - 1 - i) = temp;
    }
}
int main() {
    char chuoi[100], chuoiSaoChep[100], chuoiThem[100];
    int choice;
    do {
        printf("**********************MENU**********************\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Sao chep chuoi vao mot chuoi khac\n");
        printf("4. Nhap vao chuoi khac, tien hanh them chuoi do vao chuoi ban dau\n");
        printf("5. Nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau\n");
        printf("6. In ra chuoi dao nguoc\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap vao chuoi: ");
                scanf("%s", chuoi);
                break;
            case 2:
                printf("Chuoi: %s\n", chuoi);
                break;
            case 3:
                saoChepChuoi(chuoiSaoChep, chuoi);
                printf("Da sao chep chuoi: %s\n", chuoiSaoChep);
                break;
            case 4:
                printf("Nhap vao chuoi can them: ");
                scanf("%s", chuoiThem);
                themChuoi(chuoi, chuoiThem);
                printf("Chuoi sau khi them: %s\n", chuoi);
                break;
            case 5:
                printf("Nhap vao chuoi can so sanh: ");
                scanf("%s", chuoiThem);
                if (soSanhChuoi(chuoi, chuoiThem) == 0) {
                    printf("Hai chuoi giong nhau.\n");
                } else {
                    printf("Hai chuoi khac nhau.\n");
                }
                break;
            case 6:
                daoNguocChuoi(chuoi);
                printf("Chuoi dao nguoc: %s\n", chuoi);
                break;
            case 7:
                exit(0);
            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
        }
    } while (1==1);
    return 0;
}
