#include <stdio.h>

// 12x12の掛け算表を出力する関数
void printMultiplicationTable() {
    int i, j;

    for (i = 1; i <= 12; i++) {
        for (j = 1; j <= 12; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
}

int main() {
    printMultiplicationTable();
    return 0;
}
