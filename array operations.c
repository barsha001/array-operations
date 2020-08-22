#include <stdio.h>
#include <stdlib.h>
void insert(int *arr,int pos,int el,int size)
{
	int i;
	for(i=pos;i<=size;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[pos]=el;
}
void display(int *arr,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
void del(int *arr,int pos,int size)
{
	int i;
	for(i=pos;i<size;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[4]=0;
}
void sort(int *arr,int size)
{
	int a;
	int i=0,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(arr[j]>arr[j+1])
			{
				a=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=a;
			}
		}
	}
	
}
int main()
{
	int size;
	printf("enter the size of array you want\n");
	scanf("%d",&size);
	int n;
	int *arr=(int*)malloc(5*sizeof(int));
	while(n!=5)
	{
		printf("\nenter 1 to insert elements in array\n");
		printf("enter 2 to delete elements in array\n");
		printf("enter 3 to display elements in array\n");
		printf("enter 4 to sort the array\n");
		printf("enter 5 to exit\n");
		scanf("%d",&n);
		if(n==1)
		{
			int pos,el;
			printf("enter the posion\n");
			scanf("%d",&pos);
			printf("enter the element\n");
			scanf("%d",&el);
			insert(arr,pos,el,size)	;
		}
		if(n==2)
		{
			int pos,el;
			printf("enter the posion\n");
			scanf("%d",&pos);
			del(arr,pos,size)	;
		}
		if(n==3)
		{
			display(arr,size);
		}
		if(n==4)
		{
			sort(arr,size);	
			printf("array sorted! press 3 to dipslay\n\n");
		}	
	}
}

