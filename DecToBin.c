#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int bin[20];
    int binCount = 0;
    while (a > 0) {
        bin[binCount] = a % 2;
        a = a / 2;
        binCount++;
    }
    for (int j = binCount - 1; j >= 0; j--) { // Start from binCount - 1 and terminate at 0
        printf("%d", bin[j]);
    }
    return 0;
}
