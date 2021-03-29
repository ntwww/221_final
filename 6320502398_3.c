#include<stdio.h>
int main()
{
    int q,w,e,i,j;
    scanf("%d",&q,w,e);
    int s1[q][q],s2[w][w],s3[e][e];
    for(i=0;i<q;i++)
    {
        for(j=0;i<q;j++)
        {
            scanf("%d",s1[i][j]);
        }
    }
    for(i=0;i<w;i++)
    {
        for(j=0;i<w;j++)
        {
            scanf("%d",s2[i][j]);
        }
    }
    for(i=0;i<w;i++)
    {
        for(j=0;i<w;j++)
        {
            scanf("%d",s3[i][j]);
        }
    }



}
