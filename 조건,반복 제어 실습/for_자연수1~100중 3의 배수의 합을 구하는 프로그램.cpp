//1~100중 3의 배수 합을 구하는 프로그램
//출력 과정 출력
//for문을 이용하여 작성할 것 

#include <stdio.h>

int main()
{
	int sum = 0;
	
	for(int i=1; i<100; i++)
	{
		if((i%3)==0)
		{
			sum = sum + i;
			printf("%d\n", i); 
		}
	}
	printf("\n합계 : %d", sum);
}
