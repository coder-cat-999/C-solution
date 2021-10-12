#include <stdio.h>

int main()
{
    int mat1[4][4] , mat2[4][4];
    
    printf("Enter elemtents in Matrix 1\n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    
    printf("Enter elemtents in Matrix 2\n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    
    int sum_Matrix[4][4];
    for( int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            sum_Matrix[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("Output: \n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d ", sum_Matrix[i][j]);
        }printf("\n");
    }
   

    return 0;
}

