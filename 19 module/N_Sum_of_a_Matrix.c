#include <stdio.h>

void matrixSum(int r, int c, int A[][c], int B[][c],
                 int result[][c], int i, int j) {
    
    if (i >= r) return;
    
    result[i][j] = A[i][j] + B[i][j];

    // Move to the next column or next row
    if (j + 1 < c) {
        matrixSum(r, c, A, B, result, i, j + 1); // Next column
    } else {
        matrixSum(r, c, A, B, result, i + 1, 0); //  Next row
    }
}

void printMatrix(int r, int c, int result[][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int A[R][C], B[R][C], result[R][C];

    // Input matrix A
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix B
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Perform summation using recursion
    matrixSum(R, C, A, B, result, 0, 0);

    // Print the result matrix
    printMatrix(R, C, result);

    return 0;
}













// #include<stdio.h>
// int main()
// {
//     int row,col;
//     scanf("%d %d",&row,&col);
//     int a[row][col],b[row][col],c[row][col];
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             c[i][j]=a[i][j]+b[i][j];
//         }
//     }
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             printf("%d ",c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }