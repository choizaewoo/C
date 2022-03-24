#include <stdio.h>
int main()
{
	int linuxScore, javaScore, cScore;
	FILE *fp;
	fp = fopen("input.txt","r");
	printf("리눅스\t자바\tC언어\n");
	while(fscanf(fp,"%d,%d,%d", &linuxScore, &javaScore, &cScore)!=-1);
	{
		printf("%d\t%d\t%d\n", linuxScore, javaScore, cScore);
	}
	fclose(fp);
	return 0;
}
 
 //csv확장자 형태로 파일을 작성하게 되면, excel에서 불러오거나 편집하고 저장할 수 있다. 
 //excel에서 데이터를 입력하고 cvs(쉼표로 구분)으로 저장하면 위의 input.csv와 같이
 //콤마로 구분하여 데이터가 저장되며, 이를 읽기 위해서는 %d,%d,%d와 같이 fscanf입력서식에 
 //콤마를 넣어주면 정상적으로 불러오기가 된다. 
 
 //csv에 저장할 때 콤마는 필수.
 
  
