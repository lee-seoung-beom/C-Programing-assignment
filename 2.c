#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	/*2-1
	int a, b;
	printf("ù ��° ����: ");
	scanf("%d", &a);
	printf("�� ��° ����: ");
	scanf("%d", &b);
	printf("��: %d",a+b);*/

	/*2-2
	double a = 4.2, b = 5.1;
	printf("ù ��° ��: %f\n",a);
	printf("�� ��° ��: %f\n",b);
	printf("��: %f\n", a+b);*/
	
	/*2-3
	int a;
	printf("�Է�: ");
	scanf("%d", &a);

	char b = a;
	printf("���(int)->%d\n", a);
	printf("���(char)->%d\n", b);*/

	/*2-4
	int a;
	printf("�Է�: ");
	scanf("%d", &a);

	unsigned char b = a;
	printf("���(int)->%d\n", a);
	printf("���(char)->%d\n", b);*/

	/*2-5
	printf("ū����ǥ�� \"�Դϴ�.\n");
	printf("��������ǥ�� \'�Դϴ�.\n");
	printf("���� A�� \'A\'�Դϴ�.\n");
	printf("ū����ǥ�� �̽������� �������� \\\"�Դϴ�.\n");*/
	
	/*2-6
	char ch;
	printf("������ �Է�(%%c) : ");
	scanf("%c", &ch);

	printf("���ڷ� ���(%%c) : %c\n",ch);
	printf("������ ���(%%d) : %d\n",ch-48);*/

	/*2-7
	char ch;
	printf("�ҹ��� �Է�: ");
	scanf("%c", &ch);
	printf("%c�� %d��° ���� �ҹ���",ch,ch-97);*/

	/*2-8
	int a;
	printf("���� �Է�(0~25): ");
	scanf("%d", &a);
	printf("%d��° ���� �빮�ڴ� %c", a, a+65);*/

	/*2-9
	char ch;
	printf("�ҹ��� �Է�: ");
	scanf("%c", &ch);
	printf("�빮�� ���: %c", ch - 32);*/

	2-10
	char ch;
	printf("�빮�� �Է�: ");
	scanf("%c", &ch);
	printf("�ҹ��� ���: %c", ch + 32);

	return 0;
}