#include <stdio.h>

int main(void)
//ù° �ٿ� �Է¿��� �־��� ������� �� ���� �ǽ��� ���ϰų� ���� �Ǵ����� ����Ѵ�. 
//���� ���� ������ �����̴� �� ���� ��ŭ �ǽ��� ���ؾ� �ϴ� ���̰�, 
//������� �����ؾ� �ϴ� ���̴�.
//�� ���� ���ϰų� ���� �ùٸ� ��Ʈ�� �Ǵ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.


{	//ŷ 1��, �� 1��, �� 2��, ��� 2��, ����Ʈ 2��, �� 8��
	int king, queen, Rook, biship, knight, phone;
	
	scanf("%d %d %d %d %d %d", &king, &queen, &Rook, &biship, &knight, &phone);
	printf("%d %d %d %d %d %d\n", 1-king, 1-queen, 2-Rook, 2-biship, 2-knight, 8-phone);
	
	return 0;
}
