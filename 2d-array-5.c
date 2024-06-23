#include<stdio.h>

int main()
{
    int row , column ;

    printf("Enter row length please : ");
    scanf("%d" , &row);

    printf("\nEnter column length please : ");
    scanf("%d" , &column);

    int mat[row][column] , k , r  ;
    for(k = 0 ; k < row ; k++)
    {
        for(r = 0 ; r < column ; r++)
        {
            printf("Enter elements of row %d column %d\n" , k+1 , r+1);
            scanf("%d" , &mat[k][r]);

        }
    }

    system("cls") ;

    printf("\nThe given Matrix is : \n\n");
    for(k = 0 ; k < row ; k++)
    {
        for(r = 0 ; r < column ; r++)
        {
            printf("\t%d   " , mat[k][r]);
        }
        printf("\n");
    }

    printf("\nTranspose matrix is : \n\n");
    for(k = 0 ; k < column ; k++)
    {
        for(r = 0 ; r < row ; r++)
        {
            printf("\t%d   " , mat[r][k]);
        }
        printf("\n");
    }
   return 0 ;
}
