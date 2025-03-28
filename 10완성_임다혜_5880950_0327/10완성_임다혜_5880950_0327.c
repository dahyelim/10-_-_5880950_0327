#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 2, cols = 2; 

    // ���� �޸� �Ҵ�
    int** arr1 = (int**)malloc(rows * sizeof(int*));
    int** arr2 = (int**)malloc(rows * sizeof(int*));
    int** result = (int**)malloc(rows * sizeof(int*));

    // ���� �޸� �Ҵ� Ȯ��
    if (arr1 == NULL || arr2 == NULL || result == NULL) {
        printf("�޸� �Ҵ� ����\n");
        return -1;
    }

    // �� ����� �࿡ ���� �޸� �Ҵ�
    for (int i = 0; i < rows; ++i) {
        arr1[i] = (int*)malloc(cols * sizeof(int));
        arr2[i] = (int*)malloc(cols * sizeof(int));
        result[i] = (int*)malloc(cols * sizeof(int));

        // �� �࿡ ���� �޸� �Ҵ� Ȯ��
        if (arr1[i] == NULL || arr2[i] == NULL || result[i] == NULL) {
            printf("�޸� �Ҵ� ����\n");
            return -1;  
        }
    }

    // ù ��° ��� �Է�
    printf("ù ��° 2x2 ��� �Է� : \n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf_s("%d", &arr1[i][j]); 
        }
    }

    // �� ��° ��� �Է�
    printf("�� ��° 2x2 ��� �Է� : \n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf_s("%d", &arr2[i][j]); 
        }
    }

    // �� ����� �� ���
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // ��� ���
    printf("��� ���� ��� : \n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // ���� �޸� ����
    for (int i = 0; i < rows; ++i) {
        free(arr1[i]);
        free(arr2[i]);
        free(result[i]);
    }
    free(arr1);
    free(arr2);
    free(result);

    return 0;
}
