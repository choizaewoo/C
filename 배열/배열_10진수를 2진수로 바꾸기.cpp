#include <stdio.h>

int main()
{
	int decimal  = 13;
	int binary[20] = { 0, };
	
	int position = 0;
	while (1)
	{
		binary[position] = decimal % 2;
		decimal = decimal / 2;
		
		position++;
	
		if(decimal == 0)             // while안에 조건문이 들어가도 상관없음
						//decimal !==0 (데시말이 같이 않으면) 
		break;
	}
	
	for (int i = position -1; i >=0; i--)
	{
		printf("%d", binary[i]);
	}
	
	printf("\n");
	
	return 0;
}
