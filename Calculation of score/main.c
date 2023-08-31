#include <stdio.h>
#include <stdlib.h>

int main()
{
int arr[10]={};
double mean=0.0;
int i,n,b;
printf("Pls enter 10 numbers:");
for(i=0;i<=9;i++)
 {
    scanf("%d ",&arr[i]);
    mean=mean+arr[i];
 }
 mean=mean/10;
n=0;
for(i=0;i<=9;i++)
{
    if (arr[i]<mean)
        n=n+1;
}
printf("The average is:%lf\n",mean);
printf("Smaller tham the mean:%d\n",n);

b=0;
for(i=0;i<=9;i++)
{
    if (arr[i]>mean)
        b=b+1;
}
printf("Bigger than the mean:%d",b);
    return 0;
}
