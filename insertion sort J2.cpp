#include<stdio.h>
void sort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		j=i-1;
		temp=a[i];
		while(j>=0 && temp<a[j])
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
		
	}
	for(i=0;i<n;i++)
	 printf("%d ",a[i]); 
}
int main()
{
	int n,i,j,c=0;
	scanf("%d",&n);
	int a[n],r[n];
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	 sort(a,n);
}
