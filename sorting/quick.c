#include<stdio.h>
void quick(int *a,int lb,int ub);
int main()
{
	int i,n,a[100],lb=0;
	printf("enter the n");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quick(a,lb,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
	}
	
	void quick(int *a,int lb,int ub)
	{
		int key,i,j,t;
		key=a[lb];
		i=lb;
		j=ub+1;
		if(lb<ub)
		{
			while(1)
			{
				i++;
			
			while(a[i]<key)
			{
				i++;
			}
			j--;
			while(a[j]>key)
			{
				j--;
			}
			if(i<j)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
			else
			{
				t=a[lb];
				a[lb]=a[j];
				a[j]=t;
				break;
			}
		}
		quick(a,lb,j-1);
		quick(a,j+1,ub);
	}
}