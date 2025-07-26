#include<stdio.h>
int main()
{
  int i,j,a[i],n,temp;
  printf("enter the size of an elements:");
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
   { 
	printf(" \n enter the elements in the array a[%d]:",i);
    scanf("%d",&a[i]);
   }
  for(i=0;i<n;i++)
    {
	   for(j=0;j<n-1-i;j++)
	     {
			 if(a[j]>a[j+1])
			   {
				   temp=a[j];
				   a[j]=a[j+1];
				   a[j+1]=temp;
				}
		 }		     
     }
    for(i=0;i<n;i++)
    {
	printf(" \n enter the elements in the array a[%d]:",i);
     printf("%d",a[i]); 
    }
    return 0;
 }    
