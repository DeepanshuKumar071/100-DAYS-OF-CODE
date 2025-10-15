// Perform diagonal traversal of a matrix.
#include <stdio.h>

int main()
{
    int a[10][10], n, i, j;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal Traversal of the Matrix:\n");

    for (int col = 0; col < n; col++)
    {
        i = 0;
        j = col;
        while (j >= 0 && i < n)
        {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    for (int row = 1; row < n; row++)
    {
        i = row;
        j = n - 1;
        while (i < n && j >= 0)
        {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
