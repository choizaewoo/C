#include <stdio.h>
int main()
{
	int i=1;
	int sum=0;
	
	do{
		sum = sum + i;
		i++;
	}while(i<=10);
	
	return 0;
}

//while문을 이용했을 때의 결과가 같다.
// do~while문의 경우 while문의 조건식이 반복 루프의 마지막인 11행에 있다는 것이 while문과의 차이점

 
