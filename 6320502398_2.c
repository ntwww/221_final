#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,number[10000];
    for(i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
    }
    int nub=0,max=number[0];

    for(i=0;i<n;i++)
    {
        if(max<number[i])
        {
            max=number[i];
            nub=i+1;
        }
    }
    printf("%d %d",max,nub);

}
