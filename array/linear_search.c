#include<stdio.h>

main()
{
    int n,itm,arr[100];
    printf("Enter the size of n:\n");
    scanf("%d",&n);
    printf("Enter the element in array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
    }
    printf("Enter the item you want to search:\n");
    scanf("%d",&itm);
    int c=1;
    for(int i;i<n;i++)
    {
        if(itm==i)
        {
            printf("Element found at %d position.",i);
            c=0; 
            break;
        }
    }
    if(c)
    printf("Element not found.");
}