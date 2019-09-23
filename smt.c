#include<stdio.h>
#define max 100

typedef struct 
{
	int row;
	int col;
	int val;

}terms;
terms a[max],b[max];
void transpose(terms a[],terms[]);
void print(terms a[]);
void main()
{
	int i,r,c,k=1,j,value;
	printf(" enter the number of row and coloum\n");
	scanf("%d%d",&r,&c);
	a[0].row=r;
	a[0].col=c;
	printf(" enter the elements of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&value);
			if(value!=0)
			{
				a[k].row=i;
				a[k].col=j;
				a[k].val=value;
				k++;
			}
		}
	}
	a[0].val=k-1;
	transpose(a,b);
	print(a);
	printf(" \ntranspose of matrix is\n ");
	print(b);

}
void transpose( terms a[],terms b[])
{
	int cb=0,n,i,j;
	b[0].row=a[0].col;
	b[0].col=a[0].row;
	b[0].val=a[0].val;
	n=b[0].val;
	if(n>0)
	{
		for(i=0;i<b[0].row;i++)
		{
			for(j=1;j<=b[0].col;j++)
			{
				if(a[j].col==i)
				{
					b[j].row=a[j].col;
					b[j].col=a[j].row;
					b[j].val=a[j].val;

				}
			}
		}
	}
}
void print(terms a[])
{
	int r,c,k=1,i,j;
	r=a[0].row;
	c=a[0].col;
	for(i=0;i<r;i++)
	{	printf("\n");
		for(j=0;j<c;j++)
		{
			if((a[k].row==i)&&(a[k].col==j))
			{
				printf(" %d",a[k].val);
				k++;
			}
			else
			{
				printf("0");
			}
		}
	}
	
}