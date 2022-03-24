#include <stdio.h>
int main()
{
	FILE *fp;
	fp = fopen("output.csv", "w");
	fprintf(fp, "Name, Math, English, Programming\n");
	fprintf(fp, "%s,%d,%d,%d,%d\n", "Hong", 90,90,90,90);
	fprintf(fp, "%s,%d,%d,%d,%d\n", "Choi", 90,20,60,90);
	fprintf(fp, "%s,%d,%d,%d,%d\n", "kim", 30,50,10,90);
	fprintf(fp, "%s,%d,%d,%d,%d\n", "Hwang", 70,20,40,20);
	fclose(fp);
	return 0;
} 

