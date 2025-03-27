#include <stdio.h>
//malloc 사용으로 바꿔야함
int main() {
	int arr1[2][2];
	int arr2[2][2];
	int result[2][2];

	printf("첫 번째 2x2 행렬 입력 : \n");
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) {
			scanf_s("%d", &arr1[i][j]);
		}
	}

	printf("두 번째 2x2 행렬 입력 : \n");
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) {
			scanf_s("%d", &arr2[i][j]);
		}
	}

	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) {
			result[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	printf("행렬 덧셈 결과 : \n");
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) {
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
	return 0;
}