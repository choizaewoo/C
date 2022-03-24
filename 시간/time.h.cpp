#include <stdio.h>
#include <time.h>

int main(void)
{
	struct tm* t;
	//time_t base = 0;  //1970년임   현재날짜를 넣고 싶다면 base에 time(NULL)을 넣어주면 된다. 
	time_t base = time(NULL);
	
	t = localtime(&base);

	printf("%d %d %d\n", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);

	return 0;
}
