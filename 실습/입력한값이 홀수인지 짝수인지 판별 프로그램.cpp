#include <stdio.h>

int main()

{
	int num;
	printf("���ڸ� �Է����ּ���.");
	scanf("%d", &num);
	
	if( 0==num%2)
	{
		printf("¦���Դϴ�.");
	}
	
	else if ( 1==num%2)
	{
		printf("Ȧ���Դϴ�.");
		
	}
	return 0; 
}

