#include<stdio.h>
int main ()
{
    int arr[20]={18 ,30 ,15 ,70 , 12};
    int i,x,pos,n=5;

    printf("Array elements before insertion : ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");

    x=50;//Element to be inserted
    pos=1;
    n++;

    for(i=n-1;i>=pos;i--)
        arr[i]=arr[i-1];
    arr[pos-1]=x;

    printf("Array elements after inserted :");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");

    return 0;

}
