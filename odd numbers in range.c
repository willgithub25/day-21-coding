#include <stdio.h>

int main() {
    int n1, n2, count = 0,i;
    printf("Enter the value of n1: ");
    scanf("%d", &n1);
    printf("Enter the value of n2: ");
    scanf("%d", &n2);

    for ( i = n1; i <= n2; i++) {
        if (i % 2 ==1) {
            count++;
            if (count != 3)
                printf("%d ", i);

        }
    }
    return 0;
}
