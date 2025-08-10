#include <stdio.h>

void main()

{
#pragma region 오버플로우
	// 특정한 자료형이 표현할 수 있는 최댓값의 범위를
	// 넘어서 연산을 수행하는 과정입니다.
	char storage1 = 127 +1 ;
	printf("storage1의 값 : %d\n", storage1);
	// 오버플로우는 부호 없는 자료형에서도 똑같이 발생하며,
	// 실수일 때 오버플로우가 발생하면 infinity라는 값으로 출력됩니다.
#pragma endregion

#pragma region 언더플로우
	// 특정한 자료형이 표현할 수 있는 최솟값의 범위를
	// 넘어서 연산을 수행하는 과정입니다.
	char data = -128 - 1;

	printf("data의 값 : %d\n", data);

	// 언더플로우는 부호 없는 자료형에서도 똑같이 발생하며,
	// 실수일 때 언더플로우가 발생하면 0이라는 값으로 출력됩니다.
#pragma endregion

#pragma region 부호 없는 자료형

	unsigned int count = 42949687295; // 최대값
	printf("signed count 변수의 값 : %d\n", count);

	printf("unsigned count 변수의 값 : %u\n", count);

		//signed char(부호 있음) : -128부터 127까지 표현할 수 있습니다.

		//unsigned char(부호 없음) : 0부터 255까지 표현할 수 있습니다.
#pragma endregion

#pragma region 실수를 표현한는 방법

	float decimal = 3.1f;
	double x = 3.1f;
	// 정수형 리터럴 상수는 저장하는 값의 범위가 크지 않으면
	// int 자료형으로 저장되며, 실수형 리터럴 상수는 double
	// 자료형으로 저장됩니다.

	printf("decimal 변수의 값 : %.7f\n", decimal);
	printf("x 변수의 값 : %.15lf\n", x);
	// 표준 출력 함수로 소수를 출력할 때 4byte 크기의 실수형
	// 자료형은 소수점 이하 6자리까지만 표기하며, 8 byte 크기의
	// 실수형 자료형은 소수점 이하 15자리까지 표기합니다.
#pragma endregion

#pragma region 논리 연산자
 // 두 개의 조건을 비교하여 그 결과를 0 또는 1로
 // 나타내는 연산자입니다.
 // 논리 연산자는 AND, OR, NOT 연산자가 있습니다.


#pragma endregion

#pragma region AND 연산자
// 두 개의 조건이 다 성립될 때 실행되는 연산자입니다.

	/* int score = 99;
	 char rank = 'A';

	 if (score == 100 && rank == 'A')
	 {
		 printf("1st Place");
	 }*/
#pragma endregion

#pragma region 증감 연산자 
	 // 피연산자를 하나씩 증가시키거나 감소시킬 때
	 // 사용하는 연산자입니다.

	 ////int x = 0;
	 //int previousX = 0;
	 //x = ++previousX;
	 //printf("previousx 변수를 전위 증가한 값 : %d\n ", previousX);
	 //printf("x : %d\n", x);

	 //x = --previousX;
	 //printf("previousx 변수를 전위 감소한 값 : %d\n ", previousX);
	 //printf("x : %d\n", x);
	 //// 전위 증감 연산자는 변수의 값을 증감시킨 후에
	 //// 연산을 수행합니다.

	/* int previousY = 0;

	 int y = 0;

	 y = previousY++;

	 printf("previousY 변수를 후위 증가한 값 : %d\n ", previousY);
	 printf("y : %d\n", y);

	 y = previousY--;
	 printf("previousY 변수를 후위 감소한 값 : %d\n ", previousY);
	 printf("y : %d\n", y);*/

#pragma endregion


#pragma region for문
	 // 초기식을 연산하여 조건식의 결과에 따라 특정한 
	 // 횟수만큼 반복하는 반복문입니다.

	/* for (int i = 0; i < 10; i++)
	 {
		 printf("for문을 10번 반복합니다.\n", i);
	 }*/

#pragma endregion

#pragma region while 문
	 // 특정 조건을 만족할 때까지 계속해서 주어진 명령문을 
	 // 실행하는 반복문입니다.
	 /*int count = 5;
	 while (count > 0 )
	 {
		 printf("while문을 %d번 반복합니다.\n", count);
		 count--;
	 }*/
	 // while 문의 경우 위에서 아래로 실행되며, 아래에 있는
	 // 멍령문의 실행이 다 끝나면 다시 위에 있는 명령문으로
	 // 돌아가서 반복하는 구조입니다.

#pragma endregion

#pragma region do-while 문
	 // 조건 상관없이 한 번의 작업을 수행한 다음 조건에
	 // 따라 명령문을 실행하는 반복문입니다.

	 /*int life = 0;

	 do
	 {

		 printf("alive \n");
	 }
	 while (life > 0 );*/
#pragma endregion

#pragma region continue 문
	 // 반복문에서 continue 문이 실행되면, 해당 반복문의
	 // 현재 반복을 중단하고, 다음 반복으로 넘어갑니다.
	 // continue 문은 for문, while문, do-while문에서 사용할 수 있습니다.
	/* for (int i = 0; i <= 10; i++)
	 {
		 if (i % 3 == 0)
		 {
			 continue;
		 }
		 printf("%d", i);
	 }*/
#pragma endregion

#pragma region 중첩 반복문
	 // 반복문 안에 새로운 반복문이 있는
	 // 반복문입니다.
	for (int i = 0; i < 3; i++)
	{
		for (int i = 0; i < 3; i++)
		{
			printf("in......\n");
		}
		printf("out.....\n");
	}


}
