//1~100�� 3�� ��� ���� ���ϴ� ���α׷�
//��� ���� ���
//for���� �̿��Ͽ� �ۼ��� �� 

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
	printf("\n�հ� : %d", sum);
}
