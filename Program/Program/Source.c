#include <stdio.h>
void main()
{
#pragma region 상수 
	// 프로그램이 실행되는 동안 더 이상 변경할 수 없는
	// 메모리 공간입니다.

	const float pi = 3.141592f; // float형 상수

	// 상수의 경우 메모리 공간을 가지고 있지 않은 상수를 
	// 리터럴 상수라고 하며, 메모리 공간을 가지고 있는
	// 상수를  심볼릭 상수라고 합니다.

	// ex) pi = 6.125f;

	//printf("pi의 값 : %f\n", pi);

	// 상수는 메모리 공간을 생성하는 동시에 초기화해야 하며,
	// 한번 저장된 값은 더 이상 변경할 수 없습니다
#pragma endregion

	
}


