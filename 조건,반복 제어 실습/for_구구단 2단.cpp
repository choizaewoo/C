#include <stdio.h>

int main()
{
	printf("\t2단\n");
	for(int i=1; i<10; i++)
	{
		printf("2* %d = %d\n", i, 2*i);
	}
	return 0;
}
 
 
 //for(초깃값; 조건식; 증감치)의 문법에서 변수 선언을 for문 안에 int i를 선언해도 무방하지만 하지않음.
 //for문의 i가 1부터 9까지 1씩 증가하면서 문장 8행을 반복 수행한다.
 //i가 10이 되는 순간 for문을 빠져나가 프로그램을 종료한다.
 
  
