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

#pragma region �� ������
 // �� ���� ������ ���Ͽ� �� ����� 0 �Ǵ� 1��
 // ��Ÿ���� �������Դϴ�.
 // �� �����ڴ� AND, OR, NOT �����ڰ� �ֽ��ϴ�.


#pragma endregion

#pragma region AND ������
// �� ���� ������ �� ������ �� ����Ǵ� �������Դϴ�.

	/* int score = 99;
	 char rank = 'A';

	 if (score == 100 && rank == 'A')
	 {
		 printf("1st Place");
	 }*/
#pragma endregion

#pragma region ���� ������ 
	 // �ǿ����ڸ� �ϳ��� ������Ű�ų� ���ҽ�ų ��
	 // ����ϴ� �������Դϴ�.

	 ////int x = 0;
	 //int previousX = 0;
	 //x = ++previousX;
	 //printf("previousx ������ ���� ������ �� : %d\n ", previousX);
	 //printf("x : %d\n", x);

	 //x = --previousX;
	 //printf("previousx ������ ���� ������ �� : %d\n ", previousX);
	 //printf("x : %d\n", x);
	 //// ���� ���� �����ڴ� ������ ���� ������Ų �Ŀ�
	 //// ������ �����մϴ�.

	/* int previousY = 0;

	 int y = 0;

	 y = previousY++;

	 printf("previousY ������ ���� ������ �� : %d\n ", previousY);
	 printf("y : %d\n", y);

	 y = previousY--;
	 printf("previousY ������ ���� ������ �� : %d\n ", previousY);
	 printf("y : %d\n", y);*/

#pragma endregion


#pragma region for��
	 // �ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư���� 
	 // Ƚ����ŭ �ݺ��ϴ� �ݺ����Դϴ�.

	/* for (int i = 0; i < 10; i++)
	 {
		 printf("for���� 10�� �ݺ��մϴ�.\n", i);
	 }*/

#pragma endregion

#pragma region while ��
	 // Ư�� ������ ������ ������ ����ؼ� �־��� ��ɹ��� 
	 // �����ϴ� �ݺ����Դϴ�.
	 /*int count = 5;
	 while (count > 0 )
	 {
		 printf("while���� %d�� �ݺ��մϴ�.\n", count);
		 count--;
	 }*/
	 // while ���� ��� ������ �Ʒ��� ����Ǹ�, �Ʒ��� �ִ�
	 // �۷ɹ��� ������ �� ������ �ٽ� ���� �ִ� ��ɹ�����
	 // ���ư��� �ݺ��ϴ� �����Դϴ�.

#pragma endregion

#pragma region do-while ��
	 // ���� ������� �� ���� �۾��� ������ ���� ���ǿ�
	 // ���� ��ɹ��� �����ϴ� �ݺ����Դϴ�.

	 /*int life = 0;

	 do
	 {

		 printf("alive \n");
	 }
	 while (life > 0 );*/
#pragma endregion

#pragma region continue ��
	 // �ݺ������� continue ���� ����Ǹ�, �ش� �ݺ�����
	 // ���� �ݺ��� �ߴ��ϰ�, ���� �ݺ����� �Ѿ�ϴ�.
	 // continue ���� for��, while��, do-while������ ����� �� �ֽ��ϴ�.
	/* for (int i = 0; i <= 10; i++)
	 {
		 if (i % 3 == 0)
		 {
			 continue;
		 }
		 printf("%d", i);
	 }*/
#pragma endregion

#pragma region ��ø �ݺ���
	 // �ݺ��� �ȿ� ���ο� �ݺ����� �ִ�
	 // �ݺ����Դϴ�.
	for (int i = 0; i < 3; i++)
	{
		for (int i = 0; i < 3; i++)
		{
			printf("in......\n");
		}
		printf("out.....\n");
	}


}
