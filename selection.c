#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,limit,a[25],temp,min;
 printf("enter the limit of the array\n");
 scanf("%d",&limit);
 printf("enter %d elements\n",limit);
 for(i=1;i<=limit;i++)
  scanf("%d",&a[i]);
 printf("\n");
 for(i=1;i<=limit;i++)
{
        min=i;
 for(j=i+1;j<=limit;j++)
{
 if(a[min]>a[j])

  min=j;
 }
 if(min!=i)
 {
 temp=a[i];
 a[i]=a[min];
 a[min]=temp;
 }
}
 printf("the array after sorting is\n") ;
 for(i=1;i<=limit;i++)
 {
  printf("%d\n",a[i]);
 }
 getch();
}
