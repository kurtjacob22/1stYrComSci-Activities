#include <stdio.h>

int main(){
    int row = 3;
    int transposedRow = 2;
    
    int arr[3][2];
        // 00  10
        // 01  11
        // 02  12
    int transposedTable[2][3];
        // 00  10  20
        // 01  11  21

    for(int i = 0; i < row; i++){
        for(int j = 0; j < row - 1; j++){
            printf("Enter number at index [%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\t Table:\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < row - 1; j++){
            printf("\t%d ", arr[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < row - 1; i++){
        for(int j = 0; j < row; j++){
            transposedTable[i][j] = arr[j][i];
        }
    }

    printf("\t Transposed Table:\n");
    for(int i = 0; i < row - 1; i++){
        for(int j = 0; j < row; j++){
            printf("\t%d ", transposedTable[i][j]);
        }
        printf("\n");
    }

}