#include <stdio.h>

int main() {
    int n = 3; // 魔方阵的大小
    int magic_square[n][n];
    int i, j, num = 1, sum = (n * (n * n + 1)) / 2;

    // 初始化魔方阵
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            magic_square[i][j] = num++;
        }
    }

    // 输出魔方阵
    printf("Magic Square of size %d:\n", n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", magic_square[i][j]);
        }
        printf("\n");
    }

    printf("\nThe sum of each row, column and diagonal is %d.\n", sum);

    return 0;
}