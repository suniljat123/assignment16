#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j,p=1;
    printf("Enter elements in Matrice A: ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    printf("Enter elements in Matrice B: ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
     for(i=0;i<3;i++)
            for(j=0;j,j<3;j++)
                p=p*a[i][j]*b[i][j];
    printf("Product of matrices=%d",p);
    return 0;
}
