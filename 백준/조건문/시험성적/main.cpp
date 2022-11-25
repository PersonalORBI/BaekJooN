#include <stdio.h>

int main(void)
{
	int  grd;
	
	scanf("%d", &grd);
	if(grd>=90 && grd<=100)
	{
		printf("A\n");
	}
	else if(grd>=80 && grd<=89)
	{
		printf("B");
	}
	else if(grd>=70 && grd<=79)
	{
		printf("C");
	}
	else if(grd>=60 && grd<=69)
	{
		printf("D");
	}
	else if(grd>=0 && grd<=59)
	{
		printf("F");
	}
	else
	{
		printf("잘못된 채점입니다.");
	}
	
	return 0;
}
