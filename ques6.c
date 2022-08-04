 #include<stdio.h>
int main()
{
    int i,j,a[3][3],sr=0,sc=0,sumr[3],sumc[3];
    printf("Enter 9 Elements=");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
    {
        sc=sr=0;
        for(j=0;j<3;j++)
        {

                sc=sc+a[j][i];
                sr=sr+a[i][j];
        }
        sumc[i]=sc;
        sumr[i]=sr;
    }
    printf("Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    for(i=0;i<3;i++)
        printf("\nSum of Row[%d] of matrix=%d",i+1,sumr[i]);
    for(i=0;i<3;i++)
        printf("\nSum of Column[%d] of matrix=%d",i+1,sumc[i]);

    return 0;
}
