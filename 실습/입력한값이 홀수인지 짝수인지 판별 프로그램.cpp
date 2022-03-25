#include <stdio.h>

int main()

{
	int num;
	printf("숫자를 입력해주세요.");
	scanf("%d", &num);
	
	if( 0==num%2)
	{
		printf("짝수입니다.");
	}
	
	else if ( 1==num%2)
	{
		printf("홀수입니다.");
		
	}
	return 0; 
}

