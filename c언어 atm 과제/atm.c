# define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>

char name;
int save(int amount);
int draw(int amount);
int my_money = 0;
int balance;
int main(void)
{
    int menu, money;
    while (1)
    {
        printf("�޴��� �����ϼ���: (1)�Ա�, (2)����, (3)���� (4)�ܰ� Ȯ��: ");
        scanf("%d", &menu);

        if (menu == 1)
        {
            printf("������ �ݾ�: ");
            scanf("%d", &money);
            printf("���� �ܾ��� %d�Դϴ�.\n", save(money));
        }
        else if (menu == 2)
        {
            printf("����� �ݾ�: ");
            scanf("%d", &money);
            printf("���� �ܾ��� %d�Դϴ�.\n", draw(money));
        }
        else if (menu == 4)
        {
            printf("������ �Է����ּ���: ");
            scanf("%s", &name);
            printf("%s���� ���� �ܾ��� %f���Դϴ�.\n", &name, &balance);
        }
        else if (menu == 3)
            break;
        else continue;
    }
    return 0;

}
int save(int amount)
{
    my_money += amount;
    return my_money;
}
int draw(int amount)
{
    my_money -= amount;
    return my_money;
}