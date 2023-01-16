#include <stdio.h>
#include <string.h>
long GetFileSize(FILE* fp);

int main(void)
{
	char str[100];
	FILE* fp = fopen("ABC.txt", "rt");
	
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("file size: %ld \n", GetFileSize(fp));

	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("file size: %ld \n", GetFileSize(fp));

	fgets(str, 100, fp);
	fputs(str, stdout);

	fclose(fp);
	return 0;
}

long GetFileSize(FILE* fp)
{
	long fpos;
	long fsize;
	fpos = ftell(fp);

	fseek(fp, 0, SEEK_END);
	fsize = ftell(fp);
	fseek(fp, 0, SEEK_SET);
	return fsize;
}