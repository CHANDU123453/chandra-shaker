#include<stdio.h>
#include<stdlib.h>
int main()
{
int **array,i,j,rows,col;
printf("enter the no of rows and coloumns");
scanf("%d%d",&rows,&col);
array=(int**)malloc(rows*sizeof(int *));
for(i=0;i<rows;i++)
{
array[i]=(int*)malloc(sizeof(int)*col);
}
printf("enter the  array\n");
for(i=0;i<rows;i++)
{
for(j=0;j<col;j++)
{
scanf("%d",&array[i][j]);
}
}
printf("displaying array elements\n");
for(i=0;i<rows;i++)
{
for(j=0;j<col;j++)
{
printf("%d\t",array[i][j]);
}
printf("\n");
}
for(i=0;i<rows;i++)
free(array[i]);
free(array);
}

