#include <stdio.h>

int main()
{
	int i =10;
	
	while( i < 1 ){
		printf("while: %d\n", i);
	}
	
	do{
		printf("do~while: %d\n", i);
	}while( i < 1 );
	
	return 0;
}
