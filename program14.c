/*14.Write C program to perform following matrix operations:
1.Read two matrices from user
2.Display two matrices
3.Find sum of two matrices*/

#include<stdio.h>
void read(int m,int n,int mat[m][n]);
void display(int m,int n,int mat[m][n]);
void sum(int m,int n,int mat1[m][n],int mat2[m][n],int result[m][n]);

int main()
{
	int m,n;
	printf("Enter the number of rows and columns in the Matrix:\n");
	scanf("%d %d",&m,&n);
	
	int mat1[m][n], mat2[m][n], result[m][n];
	
	printf("Enter first matrix elements: \n");
	read(m,n,mat1);
	
	printf("Enter second matrix elements: \n");
	read(m,n,mat2);
	
	printf("First Matrix:\n");
	display(m,n,mat1);
	
	printf("Second Matrix:\n");
	display(m,n,mat2);
	
	sum(m,n,mat1,mat2,result);
	
	printf("Result Matrix:\n");
	display(m,n,result);
	
}

void read(int m ,int n ,int mat[m][n])
{
	int i,j;
	printf("Enter each element of matrix: \n");
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
}

void display(int m,int n,int mat[m][n]) 
{
	int i,j;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}	
}

void sum(int m,int n,int mat1[m][n],int mat2[m][n],int result[m][n])
{
	int i,j;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			result[i][j] = mat1[i][j] + mat2[i][j];
		}
		printf("\n");
	}
	
}