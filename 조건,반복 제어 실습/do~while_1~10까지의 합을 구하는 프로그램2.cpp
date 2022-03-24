#include <stdio.h>

int main()
{ 
	int i =10;
	
	while(i<i)
	{
		printf("while: %d\n", i);
	}
	
	do{
		printf("do~while: %d\n",i);
	}while(i<1);
	
	return 0;
 } 
 
 //실행결과를 보면 while문은 조건식이 while(i<1)이 거짓이므로 프로그램을 
 //종료하지만, do~while문은 do라는 구문이 먼저 실행하기 때문에 조건이 만족하지 않더라도 
 //한번은 실행하여 10을 출력하게 된다. 일반적으로 do~while문 보다 while문을 사용하는 것이 훨씬 더 직관적이고 편리하다.
 // 그러나 조건식을 확인하기 전에 루프 내의 문장을 무조건 한번은 실행해야 한다면 do ~while문을 사용한다.
 
  
