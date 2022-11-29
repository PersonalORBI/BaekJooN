#include <stdio.h>


int main(void)
{
	int sp1, sp2, sp3, prize;
	
	scanf("%d %d %d", &sp1, &sp2, &sp3);
	
	if(sp1==sp2 && sp2==sp3)	prize=10000+(sp1*1000);
	else if(sp1==sp2 || sp1==sp3)	prize=1000+(sp1*100);
	else if(sp2==sp3)	prize=1000+(sp2*100);
	else if(sp1 > sp2 && sp1 > sp3) prize=sp1*100;
	else if(sp2 > sp3) prize=sp2*100;
	else prize=sp3*100;
	
	printf("%d\n", prize);
	
	return 0;
}
