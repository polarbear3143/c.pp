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
#pragma region ���� ������
	// �ڷ����� �������� ���� ���·� ��� �ڷ�����
	// ������ �� �ִ� �������Դϴ�.

	char rank = 'A';
	int count = 10;
	float angle = 3.14f;

	void* reference = NULL; // ���� ������ ���� ����

	reference = &rank; // rank ������ �ּ� ���� �����մϴ�.

	// ���� �����ʹ� �޸� �ּҿ� �����ؼ� ����
	// ������ �� �����ϴ�.

	*(char *)reference = 'B'; // rank ������ ���� �����մϴ�.
	printf("rank ������ ��: %c\n", rank);	
	printf("reference ������ ��: %p\n\n", reference);
#pragma endregion

#pragma region 	��� ���� ������
	

		//// �����Ͱ� ����Ű�� �ּҿ� ����Ǿ� �ִ� ���� ������ �� ������
		//// �����Ǿ� �ִ� �������Դϴ�.

		//int room1 = 10;
		//int room2 = 20;
		//
		//const int* pt = &room1;
		////* const pointer = 999;

		//printf("pt ������ ��: %p\n", pt);
		//printf("room1 ������ �ּ�: %p\n", &room1);
		//
		//const int* const pt2 = &room2; 
		//printf("pt2 ������ ��: %p\n", pt2);
		//printf("room2 ������ �ּ�: %p\n", &room2);

#pragma endregion

#pragma region ������ 

