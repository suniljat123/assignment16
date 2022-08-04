 #include<stdio.h>
int main()
{
    int i,j,a[3][3];
    printf("Enter 9 Elements=");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    printf("Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if((i==0||i==1)&&(j==1||j==2)&&i!=j)
                a[i][j]=0;
        }
    }
    printf("Upper Triangular Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    return 0;
}
