#include <stdio.h>

int main()
// 두 개의 숫자를 입력 받아 큰 수를 출력하는 프로그램 작성
{
	int num, num2;
	printf("숫자 A 입력:");
	scanf("%d", &num1);
	
	printf("숫자 B 입력:");
	scanf("%d", &num2);
	
	if(num1 > num2){
		printf("큰 숫자는%d 입니다", &num1 );
	}
	
	else if(num1 < num2){
		printf("큰 숫자는%d 입니다", &num2 );
	}
	else{
		printf("두 숫자는 같습니다");
	}
	return 0; 
	
	
 } 
 
 
 //변수 num에 7이 입력되면 짝수인지를 나머지 연산자를 이용해 판별한다.
 //if문에서 (1==(7%2))는 7을 2로 나눈 나머지가 1이므로 즉 조건식은 (1==(1)) 과 같으므로 조건식은 참이 되어 홀수가 실행된다. 
