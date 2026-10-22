
#include <stdio.h>

#define MAX 10

void inputMatrix(int a[MAX][MAX], int r, int c)
{
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void displayMatrix(int a[MAX][MAX], int r, int c)
{
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int a[MAX][MAX], int b[MAX][MAX],
               int r, int c)
{
    int sum[MAX][MAX];
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Matrix Addition:\n");
    displayMatrix(sum, r, c);
}

void multiplyMatrix(int a[MAX][MAX], int b[MAX][MAX],
                    int r1, int c1, int c2)
{
    int product[MAX][MAX] = {0};
    int i, j, k;

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Matrix Multiplication:\n");
    displayMatrix(product, r1, c2);
}

void transposeMatrix(int a[MAX][MAX], int r, int c)
{
    int t[MAX][MAX];
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    printf("Matrix Transpose:\n");
    displayMatrix(t, c, r);
}

int main()
{
    int a[MAX][MAX], b[MAX][MAX];
    int r1, c1, r2, c2;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements of Matrix A:\n");
    inputMatrix(a, r1, c1);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of Matrix B:\n");
    inputMatrix(b, r2, c2);

    if (r1 == r2 && c1 == c2)
        addMatrix(a, b, r1, c1);
    else
        printf("Matrix Addition is not possible.\n");

    if (c1 == r2)
        multiplyMatrix(a, b, r1, c1, c2);
    else
        printf("Matrix Multiplication is not possible.\n");

    transposeMatrix(a, r1, c1);

    return 0;
}
