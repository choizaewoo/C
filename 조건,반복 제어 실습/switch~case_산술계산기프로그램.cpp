#include <stdio.h>
#include <stdio.h>
int main()
{
 	int num1,num2,result;
 	char oper;
 	for (;;)
        {
		printf("수식을 입력하세요\n");
	    scanf("%d%c%d", &num1, &oper, &num2);
 	
		if(oper == '+'){
		result = num1+num2;
		printf("%d %c %d %d\n", num1, oper, num2, num1+num2);
		}
		
		else if(oper == '-'){
		result = num1-num2;
		printf("%d %c %d %d\n", num1, oper, num2, num1-num2); 
	    }
		
		else if(oper == '*'){
		result = num1*num2;
		printf("%d %c %d %d\n", num1, oper, num2, num1*num2);		
	    }
		
		else if(oper == '/'){
		result = num1/num2; 
		printf("%d %c %d %d\n", num1, oper, num2, num1/num2);	
		}
		
		else if(oper == '^'){	
		result = num1^num2;
		printf("%d %c %d %d\n", num1, oper, num2, num1^num2);
		}
		
		else{
		printf("%d %c %d = %d\n", num1, oper, num2, result);
		}
        
	}
 
 return 0;	

} 

