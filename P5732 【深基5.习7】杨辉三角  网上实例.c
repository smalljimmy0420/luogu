#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[21][21] = {0};
    //����һ�и�ֵΪ1
    arr[0][1] = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            //��ѧ��ϵ������һ����������ӵ����ұߵ��������·�����
            arr[i + 1][j + 1] = arr[i][j] + arr[i][j + 1];
        }
    }
    //�������飬��ӡ���
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n + 1; ++j) {
            //��ӡ����Ԫ��
            if (arr[i][j] != 0) {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}

