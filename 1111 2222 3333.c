#include<stdio.h>
int main()
{
    int rows, col=4, i, j;
    printf("Enter number of rows: ");//5
    scanf("%d", &rows);
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=col; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
