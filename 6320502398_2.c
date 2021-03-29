#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,number[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&number[i]);
    }
    int nub=0,max=number[0];

    for(i=0; i<n; i++)
    {
        if(max<number[i])
        {
            max=number[i];
            nub=i+1;
        }
    }
    int check=1,nub_max=0;
    for(i=0; i<n; i++)
    {
        if(number[i]==max)
        {
            check=0;
            nub_max++;
        }
    }
    if(nub_max==1)
    {
        check=1;
    }
    int min=number[0],nub_min;;
    if(check==1)
    {
        printf("%d",nub);
    }
    else
    {
        printf("%d",max);
    }
}
