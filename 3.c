#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	/*3-1
	unsigned int a;
	printf("�Է� : ");
	scanf("%x", &a);
	printf("10���� : %d\n",a);
	printf("8����  : %o\n",a);*/

	/*3-2
	unsigned int a,b;
	printf("����: ");
	scanf("%u", &a);
	printf("����: ");
	scanf("%u", &b);
	printf("����->%u", a*b);*/

	/*3-3
	unsigned int a, b, c;
	printf("���� �Է�: ");
	scanf("%u %u %u", &a, &b, &c);
	printf("��ǰ1: %u��\n", a);
	printf("��ǰ2: %u��\n", b);
	printf("��ǰ3: %u��\n", c);*/

	/*3-4
	float a;
	printf("�Ǽ� �Է�: ");
	scanf("%f", &a);
	int b = a + 0.5;
	printf("�ݿø� ���� ���: %d", b);*/

	int a, b, c;
	scanf("%d/%d/%d", &a, &b, &c);
	printf("%04d�� %02d�� %02d��", a, b, c);

	return 0;
}