#include <stdio.h>

int main()
{
	int excel, powerPoint, word;
	int sum;
	float avg;
	
	printf("����,�Ŀ�����Ʈ,����:");
	scanf("%d %d %d", &excel, &powerPoint, &word);
	
	sum = excel + powerPoint + word;
	avg = sum/3;
	
	printf("�հ�:%d\n",sum);
	printf("�հ�:%2.f\n",avg);
	
	if( avg>=65)
	{
		printf("�հ�\n");
	}
	else{
		printf("���հ�\n");
	}
	
	return 0;
}

//avg = sum(����)/3.0(�Ǽ�);
//avg = (float)(��������ȯ)sum/3(����); 
