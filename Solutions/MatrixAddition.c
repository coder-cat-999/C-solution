#include <stdio.h>

int main()
{
    int row, col;
	printf("enter row size of both matrices to be added :\n");
	scanf("%d",&row);
	printf("enter column size of both matrices to be added :\n");
	scanf("%d",&col);
    
	int mat1[row][col], mat2[row][col];
    printf("Enter elemtents in Matrix 1\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    
    printf("Enter elemtents in Matrix 2\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    
    int sum_Matrix[row][col];
    for( int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            sum_Matrix[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("Output: \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", sum_Matrix[i][j]);
        }printf("\n");
    }
   

    return 0;
}

