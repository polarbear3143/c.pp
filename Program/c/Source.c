#include <stdio.h>

void main()
{
#pragma region ���ǹ�
	// � ������ �־��� �� �ش� ���ǿ� ���� ������ 
	// �����ϵ��� �����ϴ� ��ɹ��̴�.

#pragma endregion
#pragma region ���� ������
    // �� ���� �ǿ������� ���� ���Ῡ �� ����� 0�Ǵ� 
    // 1�̸��� ������ ��Ÿ���� �������Դϴ�.
    int positionX = 10;
    int positionY = 20;

     printf("positionX < positionY : %d\n", positionX < positionY);
     printf("positionX <= positionY : %d\n", positionX <= positionY);
     printf("positionX >= positionY : %d\n", positionX >= positionY);
     printf("positionX != positionY : %d\n", positionX != positionY);
     printf("positionX == positionY : %d\n", positionX == positionY);

     // ���� �����ڴ� ������ ���� �� 1�̶�� ������ ��ȯ�Ǹ�,
     // ������ Ʋ�� �� 0�̶�� ������ ��ȯ�˴ϴ�.
#pragma endregion
#pragma region if��
// � Ư���� ������ ���Ῡ ������ �´ٸ� ���ؿ����
// ��ɹ��Դϴ�.
//int health = 0;

//if (health = 0)
//{
   // printf("health�� 0�Դϴ�.\n");
//}
// if���� ������ 1�� �� ����Ǹ�, 0�� �� ������� �ʽ��ϴ�.
#pragma endregion

#pragma region else if��
     // if���� ������ Ʋ�� �� else if���� ������
     // �´ٸ� ����Ǵ� ��ɹ��Դϴ�.

     int level = 99;

     if (level < 11)
     {
         printf("1 Circles\n");
     }
     else if (level >= 99)
     {
         printf("5 Circles\n");
     }
     // else if���� ���� �� ������ �� ������, if����
     // ������ �� ����� �� �ֽ��ϴ�.

#pragma endregion
#pragma region else��
// if���� else if������ ������ �� Ʋ����
// ����Ǵ� ��ɹ��Դϴ�

	 int integer = 0;
     if (integer > 0)
     {
		 printf("interger ������ ����Դϴ�.\n");
	 }
	 else if (integer < 0)
     {
		 printf("interger ������ �����Դϴ�.\n");
	 }
     else
     {
		 printf("interger ������ ����� �ƴϰ�, ������ �ƴմϴ�.\n");
	 }

/* int hp = 0;
 printf("�÷��̾��� HP�� �Է��ϼ���: ");
 scanf("%d", &hp);

 if (hp > 0)
 {
     printf("�÷��̾��� Hp�� 0���� Ů�ϴ�.\n");
 }
 else if (hp < 0)
 {
     printf("�÷��̾��� Hp�� 0���� �۽��ϴ�.\n");
 }
 else
 {
     printf("�÷��̾��� Hp�� 0�Դϴ�.\n");
 }*/
 // if���� ����� ��� ���ǹ��� ������ ���� ��
 // ���� ���� �ִ� ���ǹ��� ����˴ϴ�.

#pragma endregion
#pragma region Switch��
    // � ����� ���� �� ������� ����Ǵ� ��ɹ��Դϴ�.


    /* char grade = 'f';

     switch (grade)
     {
     case 'A': printf("����� ������ 100 ~ 90�Դϴ�.\n");
         break;
     case 'B': printf("����� ������ 89 ~ 80�Դϴ�.\n");
         break;
     case 'C': printf("����� ������ 79 ~ 70�Դϴ�.\n");
         break;
     case 'D': printf("����� ������ 69 ~ 60�Դϴ�.\n");
         break;
     case 'E': printf("����� ������ 59 ~ 50�Դϴ�.\n");
         break;
     case 'F': printf("����� ������ 49 ~ 40 �Դϴ�.\n");
         break;
     default: printf("����� ������ 40 �̸��Դϴ�.\n");
         break;
     }*/
     // switch���� ��� ���ǰǿ� �ش��ϴ� ���� ���� ������
     // ��ġ�� �̵��մϴ�.
#pragma endregion
