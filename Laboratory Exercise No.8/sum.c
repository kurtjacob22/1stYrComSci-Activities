#include <stdio.h>

int main(){

    int row = 3;
    
    int arr[3][3];
	int sum[3][2];

    for(int i = 0; i < row; i++){
		for(int j = 0; j < row; j++){
            printf("Enter number at index [%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
			sum[i][0] = 0;
			sum[i][1] = 0;
		}
	}

	for(int i = 0; i < row; i++){
		for(int j = 0; j < row; j++){
			sum[i][0] += arr[i][j];
			sum[i][1] += arr[j][i];
		}
	}

	for(int i = 0; i < row; i++){
		for(int j = 0; j < row; j++){
            printf("%d ", arr[i][j]);
		}
		printf("=%d ", sum[i][0]);
        printf("\n");
	}

	printf("-----\n");
	for(int i = 0; i < row; i++){
        printf("%d ", sum[i][1]);
	}

}