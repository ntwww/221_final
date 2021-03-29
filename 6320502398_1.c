#include<stdio.h>
int main()
{
int n,c,sum[1000];
scanf("%d %d",&n,&c);
int i,nub;
for(i=0;n>0;i++)
{
    sum[i]=n%10;
    n=n/10;
}
nub=i;
int temp;
   sum[0]=sum[0]+c;
for(i=0;i<nub;i++)
{
    temp=sum[i];
    printf("a%d",temp);
    if(sum[i]<=9)
    {
        sum[i]=sum[i]-temp;
    }
    else
    {
        sum[i]=sum[i]-temp;
        sum[i+1]+=1;
        break;
    }
}
for(i=nub;i>0;i--)
{
    printf(" %d ",sum[i]);
}

}
