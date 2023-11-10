#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[21][21] = {0};
    //给第一行赋值为1
    arr[0][1] = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            //数学关系：任意一行相邻数相加等于右边的数的正下方的数
            arr[i + 1][j + 1] = arr[i][j] + arr[i][j + 1];
        }
    }
    //遍历数组，打印结果
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n + 1; ++j) {
            //打印非零元素
            if (arr[i][j] != 0) {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}

