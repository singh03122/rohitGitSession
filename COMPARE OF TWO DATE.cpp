#include<stdio.h>
int cmpdate(d1,d2,m1,m2,y1,y2);
int main ()
{
	int d1,d2,m1,m2,y1,y2;
	printf("Enter date months and year ");
	scanf("%d%d%d%d%d%d",&d1,&d2,&m1,&m2,&y1,&y2);
	return 0;
}
int cmpdate(d1,d2,m1,m2,y1,y2)
{
	if(y1<y2)
	return 1;
	if(y2<y1)
	return -1;
	if(m1<m2)
	return 2;
	if(m2<m1)
	return -2;
	if(d1<d2)
	return 3;
	if(d2<d1)
	return -3;
	
	return 0;
}
