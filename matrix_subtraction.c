#include<stdio.h>
int main()
{
    int a[3][3];
    int b[3][3];
    int i,j;
    // first Matrix 
    printf("First Matrix \n");
    printf("-------------\n");
    for(i=0;i<3;i++)
    {
        printf("Enter %d Column\n",i+1);
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    // second Matrix
    printf("Second Matrix\n");
    printf("-------------\n");
    for(i=0;i<3;i++)
    {
        printf("Enter %d Column\n",i+1);
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[i][j]-b[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%8d",b[i][j]);
        }
    }
    printf("\n");


}