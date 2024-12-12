#include<stdio.h>
 int main()
 {
    int arr[10];
    int n, key, i;
    scanf("%d",&n);
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=key)
        {
            printf("%d",arr[i]+" ");
        }
    }
 }
