#include <stdio.h>

void main()
{
#pragma region  �ּ� ������
	// ������ �ּ� ���� ��ȯ�ϴ� �������Դϴ�.

	//int data = 10;

	//printf("data ������ �ּ� : %p\n", &data);

	// �������� �ּҴ� �ش� �����Ͱ� ����� �޸��� ���� �ּҸ�
	// �ǹ��ϸ�, �޸� ������ 1byte ũ��� ������ ǥ���մϴ�.
#pragma endregion
#pragma region scanf_s �Լ�
	// ǥ�� �Է� �Լ���, ���� ������ �����͸� �پ��� ���Ŀ�
	// ���߾� �Է¹޴� �Լ��Դϴ�.

	int x = 0;
	scanf_s("%d", &x);
	//���۴� �����Ͱ� �̵��� �� �ӽ÷� ����Ǵ� �����̸�,
	// ���� �����ڿ� ���� �Է��� �� �ִ� �������� ������ �����˴ϴ�
	printf("�Է��� �� : %d\n", x);
	// ǥ�� �Է� �Լ��� �����͸� �Է��ϰ� �Ǹ� ���ۿ�
	// �����͸� �����Ͽ��ٰ� �Է��ϴ� ���� ���� ����
	// ������ ���α׷��� �����մϴ�.
#pragma endregion
#pragma region ������
// �޸��� �ּ� ���� ������ �� �ִ� �����Դϴ�.
	int storage = 10;

	int variable = 20;

	int* pointer = &storage; // storage ������ �ּ� ���� �����մϴ�.
	// �����Ͱ� ����Ű�� �޸� ������ �ڷ����� �� �� �����Ƿ�,
	// �����Ͱ� ����Ű�� �޸��� �ڷ����� �������־�� �մϴ�.
	printf("pointer ������ ��: %p\n", pointer);
	printf("storage ������ �ּ�: %p\n", pointer);
	printf("pointer ������ �ּ�: %p\n", storage);

	*pointer = 99;

	printf("storage ������ ��: %d\n", storage);
	printf("pointer ������ ��: %d\n", pointer);

	pointer = &variable; // variable ������ �ּ� ���� �����մϴ�.

	*pointer = 100;

	printf("variable ������ ��: %d\n", variable);
	printf("pointer ������ ����Ű�� ��: %d\n\n", *pointer);
	printf("pointer ������ ��: %p\n", pointer);

	// ������ ������ �ڽ��� �޸� ������ ������ ������,
	// ������ ������ ������ �ּҸ� �����ϰ� �Ǹ� �ش� ������ 
	// ����  �ּҸ� ����Ű�� �˴ϴ�.

	printf("int �ڷ����� ũ��: %u\n", sizeof(int));
	printf("pointer ������ ũ��: %u\n", sizeof(pointer));

	// ������ ������ ũ��� �߾� ó�� ��ġ�� �� �� �� ó���� �� 
	// �ִ� ũ��� ��������, �� ���� ó���� �� �ִ� ũ���
	// �ü���� ���� ũ�Ⱑ �����˴ϴ�.
#pragma endregion

