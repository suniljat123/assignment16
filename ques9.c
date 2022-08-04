 #include<stdio.h>
int main()
{
    int i,j,a[3][3],cnt=0,cnt1=0;
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
            if(a[i][j]==0)
                cnt++;
            else
                cnt1++;
        }
    }
    if(cnt>cnt1)
        printf("\nSparse Matrix");
    else
        printf("\nNot a Sparse Matrix");

    return 0;
}
