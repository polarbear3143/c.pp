#include <stdio.h>

void main()
{
#pragma region  주소 연산자
	// 변수의 주소 값을 반환하는 연산자입니다.

	//int data = 10;

	//printf("data 변수의 주소 : %p\n", &data);

	// 데이터의 주소는 해당 데이터가 저장된 메모리의 시작 주소를
	// 의미하며, 메모리 공간은 1byte 크기로 나누어 표현합니다.
#pragma endregion
#pragma region scanf_s 함수
	// 표준 입력 함수로, 여러 종류의 데이터를 다양한 서식에
	// 맞추어 입력받는 함수입니다.

	int x = 0;
	scanf_s("%d", &x);
	//버퍼는 데이터가 이동할 때 임시로 저장되는 공간이며,
	// 서식 지정자에 따라 입력할 수 있는 데이터의 범위도 결정됩니다
	printf("입력한 값 : %d\n", x);
	// 표준 입력 함수로 데이터를 입력하게 되면 버퍼에
	// 데이터를 보관하였다가 입력하는 순간 버퍼 안의
	// 내용을 프로그램에 전송합니다.
#pragma endregion
#pragma region 포인터
// 메모리의 주소 값을 저장할 수 있는 변수입니다.
	int storage = 10;

	int variable = 20;

	int* pointer = &storage; // storage 변수의 주소 값을 저장합니다.
	// 포인터가 가리키는 메모리 공간의 자료형은 알 수 없으므로,
	// 포인터가 가리키는 메모리의 자료형을 선언해주어야 합니다.
	printf("pointer 변수의 값: %p\n", pointer);
	printf("storage 변수의 주소: %p\n", pointer);
	printf("pointer 변수의 주소: %p\n", storage);

	*pointer = 99;

	printf("storage 변수의 값: %d\n", storage);
	printf("pointer 변수의 값: %d\n", pointer);

	pointer = &variable; // variable 변수의 주소 값을 저장합니다.

	*pointer = 100;

	printf("variable 변수의 값: %d\n", variable);
	printf("pointer 변수가 가리키는 값: %d\n\n", *pointer);
	printf("pointer 변수의 값: %p\n", pointer);

	// 포인터 변수도 자신의 메모리 공간을 가지고 있으며,
	// 포인터 변수에 변수의 주소를 저장하게 되면 해당 변수의 
	// 시작  주소를 가리키게 됩니다.

	printf("int 자료형의 크기: %u\n", sizeof(int));
	printf("pointer 변수의 크기: %u\n", sizeof(pointer));

	// 포인터 변수의 크기는 중앙 처리 장치가 한 번 에 처리할 수 
	// 있는 크기로 정해지며, 한 번에 처리할 수 있는 크기는
	// 운영체제에 따라 크기가 결정됩니다.
#pragma endregion
#pragma region 범용 포인터
	// 자료형이 정해지지 않은 상태로 모든 자료형을
	// 저장할 수 있는 포인터입니다.

	char rank = 'A';
	int count = 10;
	float angle = 3.14f;

	void* reference = NULL; // 범용 포인터 변수 선언

	reference = &rank; // rank 변수의 주소 값을 저장합니다.

	// 범용 포인터는 메모리 주소에 접근해서 값을
	// 변경할 수 없습니다.

	*(char *)reference = 'B'; // rank 변수의 값을 변경합니다.
	printf("rank 변수의 값: %c\n", rank);	
	printf("reference 변수의 값: %p\n\n", reference);
#pragma endregion

#pragma region 	상수 지시 포인터
	

		//// 포인터가 가리키는 주소에 저장되어 있는 값을 변경할 수 없도록
		//// 지정되어 있는 포인터입니다.

		//int room1 = 10;
		//int room2 = 20;
		//
		//const int* pt = &room1;
		////* const pointer = 999;

		//printf("pt 변수의 값: %p\n", pt);
		//printf("room1 변수의 주소: %p\n", &room1);
		//
		//const int* const pt2 = &room2; 
		//printf("pt2 변수의 값: %p\n", pt2);
		//printf("room2 변수의 주소: %p\n", &room2);

#pragma endregion

#pragma region 포인터 

