#include <stdio.h>

int main(void)
//(A+B)%C�� ((A%C) + (B%C))%C �� ������?
//
//(A��B)%C�� ((A%C) �� (B%C))%C �� ������?
//
//�� �� A, B, C�� �־����� ��, ���� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.


{	//ù° �ٿ� (A+B)%C, ��° �ٿ� ((A%C) + (B%C))%C, ��° �ٿ� (A��B)%C, ��° �ٿ� ((A%C) �� (B%C))%C�� ����Ѵ�.
	int A, B, C;
	
	scanf("%d %d %d", &A, &B, &C);
	printf("%d\n%d\n%d\n%d\n", (A+B)%C, ((A%C) + (B%C))%C, (A*B)%C, ((A%C)*(B%C))%C);
	
	return 0;
}
