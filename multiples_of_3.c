#include <stdio.h>

int main() {
    int n, k;
    int sum = 0;

    printf("Nhap n (so nguyen duong): ");
    scanf("%d", &n);

    printf("Nhap k (so nguyen duong): ");
    scanf("%d", &k);

    if (n <= 0 || k <= 0) {
        printf("Loi: n va k phai la so nguyen duong (> 0).\n");
        return 0;
    }

    printf("Cac so la boi cua 3 nho hon %d (tong <= %d):\n", n, k);

    for (int i = 3; i < n; i += 3) {
        if (sum + i <= k) {
            printf("%d ", i);
            sum += i;
        }
        else {
            break;
        }
    }

    printf("\nTong cac so: %d\n", sum);

    return 0;
}
