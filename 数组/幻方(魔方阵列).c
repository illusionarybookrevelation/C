#include <stdio.h>
#include <stdlib.h>

// 定义魔方阵的阶数
#define N 3

// 定义魔方阵
int magic[N][N];

// 初始化魔方阵
void init_magic() {
  int i, j;
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      magic[i][j] = 0;
    }
  }
}

// 打印魔方阵
void print_magic() {
  int i, j;
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      printf("%d ", magic[i][j]);
    }
    printf("\n");
  }
}

// 生成魔方阵
void generate_magic() {
  int i, j, k;
  // 初始化魔方阵
  init_magic();

  // 从1开始填入魔方阵
  k = 1;
  i = 0;
  j = N / 2;

  while (k <= N * N) {
    // 将k填入魔方阵
    magic[i][j] = k;

    // 计算下一个位置
    i--;
    j++;

    // 如果超出边界，则换行
    if (i < 0) {
      i = N - 1;
    }
    if (j >= N) {
      j = 0;
    }

    // 如果当前位置已经被填入，则将i和j向右移动一位
    if (magic[i][j] != 0) {
      i++;
      j--;
    }

    // 递增k
    k++;
  }
}

int main() {
  // 生成魔方阵
  generate_magic();

  // 打印魔方阵
  print_magic();

  return 0;
}
//Gemini帮我完成了这份答卷，对不起
