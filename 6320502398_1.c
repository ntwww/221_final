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
    for(i=0;i<nub;i++)
    {
        temp=sum[i];
        if(c==sum[0])
        {
            sum[i+1]=c;
        }
        else
        {
if(i==0)
        sum[i]=sum[i]+c;
        if(sum[i]<=9)
        {
            sum[i]=sum[i];
        }
        else
        {
            sum[i]=sum[i]-temp;
            sum[i+1]+=1;
            break;
        }
        }
    }
    for(i=nub-1;i>=0;i--)
    {
        printf("%d",sum[i]);
    }

}
