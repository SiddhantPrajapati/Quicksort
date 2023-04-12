//quick sort
#include<stdio.h>
int main()
{
    int a[25],i,j,n,temp;
    printf("enter the  number of element that you want Sort.=");
    scanf("%d",&n);
    printf("enter element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //for sorting
    for(j=0;j<n;j++)
    {
         for(i=0;i<n;i++)
    {
        if(a[i]<a[n-1-i])
        {
            temp=a[i];
            a[i]=a[n-1-i];
            a[n-1-i]=temp;
        }
    }
    }

    printf("\nSorting element\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
