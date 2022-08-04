#include<stdio.h>
int main()
{
    int i,j,a[3][3],b[3][3];
    printf("Enter 9 Elements=");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("Original matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("Matrix after transpose\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }

    return 0;
}
