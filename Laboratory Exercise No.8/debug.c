#include <stdio.h>
int main() {
    int originalT[3][2];
    int TransposedT[2][3];
    int row=3, column=2;
    int elements=row*column;
	printf("Input %d elements: \n",elements);
	
	for(int r = 0; r < row; r++){
		for(int c = 0; c < row-1; c++){
			scanf("%d", &originalT[r][c]);
		}
	}
	
	printf("Original Table: \n");
    for(int r = 0; r < row; r++){
		for(int c = 0; c < row-1; c++){
			printf("%d\t", TransposedT[r][c]);
		}   
		printf("\n");
	}

    for(int i = 0; i < row - 1; i++){
        for(int j = 0; j < row; j++){
            TransposedT[i][j] = originalT[j][i];
        }
    }
	
	printf("Transposed Table: \n");
    for(int r = 0; r < row-1; r++){
        for(int c = 0; c < row; c++){
			printf("%d\t", TransposedT[r][c]);
		}
		printf("\n");
	}
}