#include<stdio.h>
#include<stdlib.h>
int main ()
int a,b,c;
{
printf("enter length of side of triangle");
scanf("%d%d%d",&a,&b,&c);
if((a+b)>c &&(b+c)>a &&(a+c)>b)
{
printf("side lengt are valid");
else 
printf("tringle cannot be formed with given length");
}

printf("\n");
return 0;
}
