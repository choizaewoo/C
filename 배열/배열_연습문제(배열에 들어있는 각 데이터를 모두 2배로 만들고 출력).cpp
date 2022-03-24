#include <stdio.h>

int main()
{
	int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
	int sum = 0; //  sum에 항상 초기화를 해주어야함. 
	
	for (int i = 0; i<=9; i++){	
		numArr[i] *= 2;
	}
	
	for (int i = 0; i<=9; i++){	
		printf("%d\n", numArr[i]);
	}	

	return 0;
}
