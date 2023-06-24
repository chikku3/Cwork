#include<stdio.h>
int main()
{
    int a[10],n,i;
    printf("Enter the number of elements in an array : ");
    scanf("%d",&n);
    printf("Enter the array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Odd numbers are :   ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            printf("\n%d",a[i]);
        }
    }
}