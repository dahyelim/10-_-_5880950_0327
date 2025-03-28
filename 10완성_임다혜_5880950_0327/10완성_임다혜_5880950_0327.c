#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 2, cols = 2; 

    // 동적 메모리 할당
    int** arr1 = (int**)malloc(rows * sizeof(int*));
    int** arr2 = (int**)malloc(rows * sizeof(int*));
    int** result = (int**)malloc(rows * sizeof(int*));

    // 동적 메모리 할당 확인
    if (arr1 == NULL || arr2 == NULL || result == NULL) {
        printf("메모리 할당 실패\n");
        return -1;
    }

    // 각 행렬의 행에 대해 메모리 할당
    for (int i = 0; i < rows; ++i) {
        arr1[i] = (int*)malloc(cols * sizeof(int));
        arr2[i] = (int*)malloc(cols * sizeof(int));
        result[i] = (int*)malloc(cols * sizeof(int));

        // 각 행에 대한 메모리 할당 확인
        if (arr1[i] == NULL || arr2[i] == NULL || result[i] == NULL) {
            printf("메모리 할당 실패\n");
            return -1;  
        }
    }

    // 첫 번째 행렬 입력
    printf("첫 번째 2x2 행렬 입력 : \n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf_s("%d", &arr1[i][j]); 
        }
    }

    // 두 번째 행렬 입력
    printf("두 번째 2x2 행렬 입력 : \n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf_s("%d", &arr2[i][j]); 
        }
    }

    // 두 행렬의 합 계산
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // 결과 출력
    printf("행렬 덧셈 결과 : \n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // 동적 메모리 해제
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
