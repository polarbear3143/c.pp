#include <stdio.h>

void main()

{
#pragma region �����÷ο�
	// Ư���� �ڷ����� ǥ���� �� �ִ� �ִ��� ������
	// �Ѿ ������ �����ϴ� �����Դϴ�.
	char storage1 = 127 +1 ;
	printf("storage1�� �� : %d\n", storage1);
	// �����÷ο�� ��ȣ ���� �ڷ��������� �Ȱ��� �߻��ϸ�,
	// �Ǽ��� �� �����÷ο찡 �߻��ϸ� infinity��� ������ ��µ˴ϴ�.
#pragma endregion

#pragma region ����÷ο�
	// Ư���� �ڷ����� ǥ���� �� �ִ� �ּڰ��� ������
	// �Ѿ ������ �����ϴ� �����Դϴ�.
	char data = -128 - 1;

	printf("data�� �� : %d\n", data);

	// ����÷ο�� ��ȣ ���� �ڷ��������� �Ȱ��� �߻��ϸ�,
	// �Ǽ��� �� ����÷ο찡 �߻��ϸ� 0�̶�� ������ ��µ˴ϴ�.
#pragma endregion

#pragma region ��ȣ ���� �ڷ���

	unsigned int count = 42949687295; // �ִ밪
	printf("signed count ������ �� : %d\n", count);

	printf("unsigned count ������ �� : %u\n", count);

		//signed char(��ȣ ����) : -128���� 127���� ǥ���� �� �ֽ��ϴ�.

		//unsigned char(��ȣ ����) : 0���� 255���� ǥ���� �� �ֽ��ϴ�.
#pragma endregion

#pragma region �Ǽ��� ǥ���Ѵ� ���

	float decimal = 3.1f;
	double x = 3.1f;
	// ������ ���ͷ� ����� �����ϴ� ���� ������ ũ�� ������
	// int �ڷ������� ����Ǹ�, �Ǽ��� ���ͷ� ����� double
	// �ڷ������� ����˴ϴ�.

	printf("decimal ������ �� : %.7f\n", decimal);
	printf("x ������ �� : %.15lf\n", x);
	// ǥ�� ��� �Լ��� �Ҽ��� ����� �� 4byte ũ���� �Ǽ���
	// �ڷ����� �Ҽ��� ���� 6�ڸ������� ǥ���ϸ�, 8 byte ũ����
	// �Ǽ��� �ڷ����� �Ҽ��� ���� 15�ڸ����� ǥ���մϴ�.
#pragma endregion


}
