#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,a[100],temp,limit;
 printf("enter the limit of the array\n");
 scanf("%d",&limit);
 printf("enter %d elements\n",limit);

 for(i=0;i<limit;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("\n");

  for(i=1;i<limit;i++)
  {
   j=i;

   while((j>0)&&(a[j-1]>a[j]))
   {
     temp=a[j];
     a[j]=a[j-1];
     a[j-1]=temp;
     j--;
   }

  }
 printf("the array after insertion sort is\n");

  for(i=0;i<limit;i++)
  {
   printf("%d\n",a[i]);
  }
  getch();
}
