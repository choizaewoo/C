//2~9단을 출력하는 프로그램을 작성
//다중for문을 이용하여 작성할 것 

#include <stdio.h>
int main()
{
	int sum =0;
	for(int i=2; i<10; i=i+3){ 
		for(int j=1; j<10; j++){
			
				sum = i * j;
				printf("%d*%d=%d\t", i,j, i*j);
				
				sum = (i+1) * j;
				printf("%d*%d=%d\t", i+1, j, i*j);
				
				
				sum = (i+2) * j;
				printf("%d*%d=%d\n", i+2, j, i*j);
				
		}
	}
	return 0;
 } 
