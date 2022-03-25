#include <stdio.h>

int main()
// 두 개의 숫자를 입력 받아 큰 수를 출력하는 프로그램 작성
{
	int numberA, numberB;
	printf("숫자 A 입력:");
	scanf("%d", &numberA);
	
	printf("숫자 B 입력:");
	scanf("%d", &numberB);
	
	if(numberA > numberB)
	{
		printf("큰 숫자는 %d 입니다.", numberA);
	}
	else if(numberA < numberB)
	{
		printf("큰 숫자는 %d 입니다.", numberB);
	}
	 	
	 	return 0;
	 	
 } 
