#include<stdio.h>
int main()
{
    int n,pos,i;
    scanf("%d",&n);
    int sum[n];
    for(i=0;i<1000;i++)
        {
            sum[i]=0;
        }
    for(i=0;i<n;i++)
    {
     scanf("%d",&pos);
     sum[pos]+=1;
    }
    int max =sum[0];
    int loc =0;
    for(i=0;i<1000;i++)
    {
        if (max<sum[i])
        {
            max=sum[i];
            loc=i;
        }
    }
    for(i=0;i<n;i++)
    {

    }
    printf("%d",loc);




}
