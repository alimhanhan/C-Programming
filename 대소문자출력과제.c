#include <stdio.h>

int main()
{
    char c;

    printf("���ڸ� �Է��Ͻÿ�:");

    for (int i = 0; i < 5; i++) {
        scanf_s(" %c", &c, 1);

        if (c >= 'a' && c <= 'z')
            printf("�ҹ����Դϴ�\n");
        else if (c >= 'A' && c <= 'Z')
            printf("�빮���Դϴ�.\n");
        else
            printf("�����ڰ� �ƴմϴ�\n");
    }

    return  0;
}