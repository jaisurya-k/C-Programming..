#include<stdio.h>
void main()
{
    int n,*ptr,i;
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("error");
    }
    else
    {
    printf("enter the size:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("memory allocate: ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",ptr[i]);
    }
    }
}
