#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {  
        int divisor = 0;

        for (int j = 2; j < i; j++) {  
            if (i % j == 0) {
                divisor++;  
                break;      
            }
        }

        if (divisor == 0) {
            printf("%d ", i);  
        }
    }

    printf("\n");
    return 0;
}
