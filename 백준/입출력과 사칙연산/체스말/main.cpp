#include <stdio.h>

int main(void)
//첫째 줄에 입력에서 주어진 순서대로 몇 개의 피스를 더하거나 빼야 되는지를 출력한다. 
//만약 수가 양수라면 동혁이는 그 개수 만큼 피스를 더해야 하는 것이고, 
//음수라면 제거해야 하는 것이다.
//몇 개를 더하거나 빼야 올바른 세트가 되는지 구하는 프로그램을 작성하시오.


{	//킹 1개, 퀸 1개, 룩 2개, 비숍 2개, 나이트 2개, 폰 8개
	int king, queen, Rook, biship, knight, phone;
	
	scanf("%d %d %d %d %d %d", &king, &queen, &Rook, &biship, &knight, &phone);
	printf("%d %d %d %d %d %d\n", 1-king, 1-queen, 2-Rook, 2-biship, 2-knight, 8-phone);
	
	return 0;
}
