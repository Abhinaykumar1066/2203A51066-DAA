#include<stdio.h>
int main()
{
	int n;
	printf("Enter the no.of elements:");
	scanf("%d",&n);
	int a[n],i,j,temp;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
			  temp=a[i];
			  a[i]=a[j];
			  a[j]=temp;				
			}
		}
	}
	printf("\nSorted array:");
	for(i=0;i<n;i++)
	  printf("%d ",a[i]);
}
