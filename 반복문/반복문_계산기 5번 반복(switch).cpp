#include <stdio.h>
#include <math.h>
int main()
{
 	int num1,num2,result;
 	int isExit = 0;
 	char oper;
	for (int index = 0; index < 5; index++)
{

 	printf("수식을 입력하세요.\n");
	scanf("%d %c %d", &num1, &oper, &num2);
 	switch(oper)
	   {
 		
		case '+':
			result = num1 + num2; 
			break;
		
		case '-':
			result = num1 - num2; 
			break; 
		
		case '*':
			result = num1 * num2; 
			break; 
		
		case '/':
			result = num1 / num2;  
			break; 
		case '%':
			result = num1 % num2;  
			break; 
		case '^':
			result = pow(num1,num2); 
			break; 
		 
		default:
			result = 0;
			isExit = 1;
			printf("잘못된 연산기호 입니다.\n");
			break;
	    }
	    if(isExit == 1){
		 	break;
		}
    printf("%d %c %d = %d\n", num1, oper, num2, result);
}
	return 0;	

} 

