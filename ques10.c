 #include<stdio.h>
int main()
{
    int i,j,a[3][3],row=0,cnt=0,cnt1=0;
    printf("Enter 0 or 1=");
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
        cnt=0;
        for(j=0;j<3;j++)
        {
            if(a[i][j]==1)
                cnt++;
        }
        if(cnt>cnt1)
        {
            cnt1=cnt;
            row=i;
        }
    }
    printf("\nRow with maximum 1's is=%d",row+1);

    return 0;
}
