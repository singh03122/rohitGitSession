#include<stdio.h>
int main ()
{
int i,n; 
printf("Enter any no to find its factors");
scanf("%d",&n);
printf("All factors of %d are:\n",n);
for(i=1;i<=n;i++)
{
if(n%i==0)	
{
printf("%d",i);
}
printf("\n");
}
return 0;
}
