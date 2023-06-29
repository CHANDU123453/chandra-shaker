      #include<stdio.h>
int main()
{
int x, i,a[50],size;
printf("enter the array size");
scanf("%d",&size);
printf("enter the array");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("enter new element");
scanf("%d",&x);
/*for(i=size-1;i>=0;i--)
{
a[i+1]=a[i];
}
a[0]=x;
size++;
printf("after insertion new array will be\n");
for(i=0;i<size;i++)
{
printf("%d\t",a[i]);
}
}*/
//for(i=0;i<size;i++)//not necessary
a[5]=x;
size++;
printf("after insertion new array will be\n");
for(i=0;i<size;i++)
{
printf("%d\t",a[i]);
}
}

