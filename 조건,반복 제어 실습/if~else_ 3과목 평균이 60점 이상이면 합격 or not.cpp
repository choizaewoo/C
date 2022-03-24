#include <stdio.h>

int main()
{
	int excel, powerPoint, word;
	int sum;
	float avg;
	
	printf("엑셀,파워포인트,워드:");
	scanf("%d %d %d", &excel, &powerPoint, &word);
	
	sum = excel + powerPoint + word;
	avg = sum/3;
	
	printf("합계:%d\n",sum);
	printf("합계:%2.f\n",avg);
	
	if( avg>=65)
	{
		printf("합격\n");
	}
	else{
		printf("불합격\n");
	}
	
	return 0;
}

//avg = sum(정수)/3.0(실수);
//avg = (float)(강제형변환)sum/3(정수); 
