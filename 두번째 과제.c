#include <stdio.h>
#include <stdlib.h>

int main(void) 

{
	int x; 
	
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &x); 
	
	printf("���� �ڸ��� : %d\n", x / 100); 
	
	printf("���� �ڸ��� : %d\n", x % 100 / 10); 
	
	printf("���� �ڸ��� : %d\n", x % 10); return 0; 

}