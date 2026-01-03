#include <stdio.h>
#include<stdlib.h>
int ls(int a[],int n,int key);
int linear_search(int a[],int n,int key);
int main()
{
    int a[100],n,key,i,loc;
    int r;
    printf("enter r\n");
    scanf("%d",&r);
    printf("enter n value \n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter key element\n");
    scanf("%d",&key);
    if(r==1)
    {
      printf("This is non recurssive");
      loc=ls(a,n,key);
    }
    else if(r==2)
    {
        printf("This is recurssive");
        loc=linear_search(a,n,key);
    }
    else
    {
       exit(0);
    }
   if(loc!=-1)
   {
       printf("found location that is %d",loc);
   }
   else
   {
       printf("location not found");
   }
}
int ls(int a[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int linear_search(int a[],int n,int key)
{
    int x;
    if(n-1==-1)
    {
        return -1;
    }
    else if(a[n-1]==key)
    {
        return n-1;
    }
    else
    {
        x=linear_search(a,n-1,key);
        return x;
    }
}