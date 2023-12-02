#include <stdio.h>
#include <stdlib.h>
void nhapMang(int *arr, int n) {
    printf("Nhap vao mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", arr + i);
    }
}
void inMang(int *arr, int n) {
    printf("Mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
void saoChepMang(int *arr1, int *arr2, int n) {
    for (int i = 0; i < n; i++) {
        *(arr2 + i) = *(arr1 + i);
    }
    printf("Da sao chep mang.\n");
}
void doiCho2Mang(int *arr1, int *arr2, int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
    printf("Da doi cho 2 mang.\n");
}
void daoNguocMang(int *arr, int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = *(arr + i);
        *(arr + i) = *(arr + n - 1 - i);
        *(arr + n - 1 - i) = temp;
    }
    printf("Da dao nguoc mang.\n");
}
void timKiemKyTu(int *arr, int n, int key) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == key) {
            printf("Tim thay ky tu %d tai vi tri %d.\n", key, i + 1);
            count++;
        }
    }
    if (count == 0) {
        printf("Khong tim thay ky tu %d trong mang.\n", key);
    }
}
int main() {
    int arr1[100], arr2[100], n, key, choice;
    do {
        printf("**********************MENU**********************\n");
        printf("1. Nhap vao mang\n");
        printf("2. In ra mang\n");
        printf("3. Sao chep mang vao mang khac\n");
        printf("4. Nhap vao mang khac, doi cho 2 mang voi nhau\n");
        printf("5. Dao nguoc mang\n");
        printf("6. Nhap vao 1 ky tu, tim kiem ky tu trong mang\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Nhap vao so phan tu cua mang: ");
                scanf("%d", &n);
                nhapMang(arr1, n);
                break;
            case 2:
                inMang(arr1, n);
                break;
            case 3:
                saoChepMang(arr1, arr2, n);
                break;
            case 4:
                printf("Nhap vao mang khac:\n");
                nhapMang(arr2, n);
                doiCho2Mang(arr1, arr2, n);
                break;
            case 5:
                daoNguocMang(arr1, n);
                break;
            case 6:
                printf("Nhap vao 1 ky tu can tim kiem: ");
                scanf("%d", &key);
                timKiemKyTu(arr1, n, key);
                break;
            case 7:
                exit(0);
            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
        }
    } while (1==1);
    return 0;
}
