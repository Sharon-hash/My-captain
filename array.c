#include<stdio.h>

int main()
{
    int array1[10][10],i,j,m=3,n=3,sum = 0;

        printf("\nEnter values to the matrix : \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nEnter a[%d][%d] value : ",i,j);
                 scanf("%d", &array1[i][j]);
        }
    }

    printf("\nThe given matrix is \n\n");
        for (i = 0; i < m; ++i)
        {
        for (j = 0; j < n; ++j)
        {
            printf("\t\t%d", array1[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}
