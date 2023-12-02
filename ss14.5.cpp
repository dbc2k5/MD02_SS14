#include <stdio.h>
// Hàm sap xep mang theo thuat toán noi bot
void sapXepNoiBot(int *arr, int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                // Hoán doi giá tri neu phan tu sau lon hon phan tu truoc
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
// Hàm sap xep mang theo thuat toán chon
void sapXepChon(int *arr, int n) {
    int minIndex, temp;
    for (int i = 0; i < n - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (*(arr + j) < *(arr + minIndex)) {
                minIndex = j;
            }
        }
        // Hoán doi giá tri nho nhat voi phan tu dau tiên chua duoc sap xep
        temp = *(arr + i);
        *(arr + i) = *(arr + minIndex);
        *(arr + minIndex) = temp;
    }
}
// Hàm sap xep mang theo thuat toán chèn
void sapXepChen(int *arr, int n) {
    int key, j;
    for (int i = 1; i < n; i++) {
        key = *(arr + i);
        j = i - 1;
        // Di chuyen các phan tu lon hon key ve sau
        while (j >= 0 && *(arr + j) > key) {
            *(arr + j + 1) = *(arr + j);
            j = j - 1;
        }
        // ?at key vào dúng vi trí
        *(arr + j + 1) = key;
    }
}
// Hàm in mang
void inMang(int *arr, int n) {
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
int main() {
    int arr[100], n, choice;
    // Nhap so phan tu cua mang
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d", &n);
    // Nhap mang
    printf("Nhap vao mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", arr + i);
    }
    // Menu sap xep
    printf("1. Sap xep tang dan\n");
    printf("2. Sap xep giam dan\n");
    printf("Lua chon cua ban: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            sapXepNoiBot(arr, n);
            break;
        case 2:
            sapXepNoiBot(arr, n);
            break;
        default:
            printf("Lua chon khong hop le.\n");
            return 1;
    }
    // In mang sau khi sap xep
    inMang(arr, n);
    return 0;
}
