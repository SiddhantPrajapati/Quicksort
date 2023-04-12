//QUICK SORT
#include<stdio.h>
int partition(int a[25],int lb,int ub)
{
    //lb contains lower bound
    //ub contain upper bound
    int pivot; //contain pivot element
    int i=(lb-1);
    pivot=a[ub];
    int j;
    for(j=lb;j<=ub-1;j++)
    {
        if(a[j]<pivot) //find element that is less than pivot(lb)
        {
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[ub]);
    return(i+1);
}
void swap(int a,int b) // perform swap operation between lb and ub
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void quicksort(int a[25],int lb,int ub)
{
    if(lb<ub)
    {
        int pi=partition(a,lb,ub);// split array into three parts
        quicksort(a,lb,pi-1);     // first array contain lb to pivot-1 elements
        quicksort(a,pi+1,ub);    // second array contain pivot+1 to ub elements
                                  // third array contain only pivot element
    }
}
int main()
{
    int a[25],n,i;
    printf("enter the no of element to sort\n");
    scanf("%d",&n);

    printf("\nEnter the element:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    quicksort(a,0,n-1);

    printf("\nArray after sorting:");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}


