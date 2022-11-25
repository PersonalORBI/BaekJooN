#include <stdio.h>

int main(void)


{	//
	int num1, num2, result100, result10, result1, total;
	
	scanf("%d\n%d", &num1, &num2);
	result1=num2%10*num1;
	result10=num2%100/10*num1;
	result100=num2/100*num1;
	total=result1+result10*10+result100*100;
	printf("%d\n%d\n%d\n%d\n", result1, result10, result100, total);
	
	return 0;
}
