#include<stdio.h >
int main ()
{
	int i,x; 
	printf("entre a no");
	scanf("%d",&x);
	for (i=1;i<=x;i++)
	(i%2==0)
		printf("%d\t",i*2-1);
	return 0; 
}
