#include <stdio.h>
//malloc ������� �ٲ����
int main() {
	int arr1[2][2];
	int arr2[2][2];
	int result[2][2];

	printf("ù ��° 2x2 ��� �Է� : \n");
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) {
			scanf_s("%d", &arr1[i][j]);
		}
	}

	printf("�� ��° 2x2 ��� �Է� : \n");
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

	printf("��� ���� ��� : \n");
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) {
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
	return 0;
}