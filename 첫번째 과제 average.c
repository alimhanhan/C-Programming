// ����ڷκ��� �Է¹��� ���� 3���� ��հ��� ȭ�鿡 ����϶�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;
	int average;

	printf("ù ��° ���ڸ� �Է��Ͻÿ�:");
	scanf("%d", &x);

	printf("�� ��° ���ڸ� �Է��Ͻÿ�:");
	scanf("%d", &y);

	printf("�� ��° ���ڸ� �Է��Ͻÿ�:");
	scanf("%d", &z);

	average = (x + y + z)/3 ;
	printf("�� ���� ���= %d \n", average);

	return 0;
}