#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], n, value, pos;

    printf("Nhap so phan tu (1-100): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);
    printf("Vi tri them (0-%d): ", n);
    scanf("%d", &pos);

    for (int i = n; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = value;

    printf("Mang sau khi chen: ");
    for (int i = 0; i <= n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
