#include <stdio.h>

int main()
{
	int input1, input2;
	int returnData = 0;
	returnData = scanf("%d %d", &input1, &input2);
	printf("반환 값 : %d", returnData);
	return 0;
}

//  scnaf 동작의 결과를 확인하기 위하여 returnData 라는 변수에 scanf의 결과를
// 받아서 출력하도록 함. 문자 a,b를 사용하면 정수가 아니기 때문에 출력하지 못하므로 0이 출력된다. 
