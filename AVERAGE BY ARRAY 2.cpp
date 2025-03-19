#include<stdio.h>
int main ()
{
	int a[10],i,sum;
	float avg ;

printf("Enter ten no for average ");
for (i=0;i<=9;i++)
scanf("%d",&a[i]);

for (i=0;i<=9;i++)
sum = sum + a[i];
avg = sum/10.0;
printf("Average is %f",avg);

printf("\n");
return 0;
}

