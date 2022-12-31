//WAP to implement Bubble Sort
#include<stdio.h>
int print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
int bubble(int a[],int n)
{
	int i,j,temp;
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
}
int main()
{
	int i,j,temp;
	int a[5]={45,87,23,16,13};
	int n=sizeof(a)/sizeof(a[0]);
	printf("Before sorting array elements are-\n");
	print(a,n);
	bubble(a,n);
	printf("\nAfter sorting array elements are-\n");
	print(a,n);
}
