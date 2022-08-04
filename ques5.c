#include<stdio.h>
int main()
{
    int i,j,a[3][3],sum=0;
    printf("Enter 9 Elements=");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
                sum=sum+a[i][j];
        }
    }
    printf("Original matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("\nSum of left Diagonals of matrix=%d",sum);

    return 0;
}
