#include<stdio.h>
int main()
{
    int i,j,k,l,x[5];
    printf("\nEnter the 4 digits:");
    for(i=0;i<4;i++)
    scanf("%d",&x[i]);
    printf("\nThe 4 digit number is:");
    for(i=0;i<4;i++)
    printf("%d",x[i]);

    
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            for(k=0;k<4;k++)
            {
            for(l=0;l<4;l++)
            {
                if ((x[i] != x[j]) && (x[i] != x[k]) && (x[i] != x[l]) && (x[j] !=x[k]) && (x[j] !=x[l]) && (x[k] != x[l]))
                printf("\n%d%d%d%d", x[i],x[j],x[k],x[l]);
            }
            }
            }
        }
        return 0;
    }