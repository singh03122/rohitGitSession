// program to draw a line 
#include<stdio.h>
void drawline(void);
int main (void)
{
  drawline();
  return 0;
}
void drawline (void)
{
	int i ;
	for(i= 1;i<=8000;i++)
	printf("_");
}
