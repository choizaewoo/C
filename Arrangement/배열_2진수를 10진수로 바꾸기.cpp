#include <stdio.h>

int main()
{
	int decimal = 0;
	int binary[4] = {1,1,0,1};
	
	for(int index = 3; index >=0; index--){
	//2의 n승 구함
		int result = 1;
		for(int n = 0; n < index; n++)
		result *= 2;
	}
	//binary[index] == 1이면 decimal 더하기	
		if(binary[index] == 1){
			
			decimal +=index
			
	}
	printf("%d\n", decimal);
	
	return 0; 
	
 } 
