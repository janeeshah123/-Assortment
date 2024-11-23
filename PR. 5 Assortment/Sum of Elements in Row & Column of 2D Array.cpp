#include <stdio.h>
  int main() {
    int rows, cols,rownum,colnum, colsum, rowsum,i,j;
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int a[rows][cols];
    printf("Enter array's elements:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter row number: ");
    scanf("%d", &rownum);
    int rowSum = 0;
    printf("Elements of row %d: ", rownum);
    for ( j = 0; j < cols; j++) {
        printf("%d ", a[rownum][j]);
        rowSum += a[rownum][j];
    }
    printf("\nThe sum of row %d: %d\n", rownum, rowsum);
    printf("Enter column number: ");
    scanf("%d", &colnum);
    int colSum = 0;
    printf("Elements of column %d: ", colnum);
    for ( i = 0; i < rows; i++) {
        printf("%d ", a[i][colnum]);
        colSum += a[i][colnum];
    }
    printf("\nThe sum of column %d: %d\n", colnum, colSum);

    return 0;
}
