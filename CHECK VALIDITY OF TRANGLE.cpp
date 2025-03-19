#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b,c;
printf("Enter length of a tringle");
scanf("%d%d%d",&a,&b,&c);
if((a+b)>c &&(a+c)>b &&(b+c)>a)
{
printf("SIDE OF LENGTH ARE VALID");
else 
printf("TRINGLE CANNOT BE FORMED WITH GIVEN LENGTH");
printf("\n");
}
return 0;
}
