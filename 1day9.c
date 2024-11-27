#include<stdio.h>
int main()
{   char n[20] = "i am ironman";

	char b[100],c;
	FILE *f;
	f = fopen("INPUT.txt","w+");
//	printf("%s ", n);
	fprintf(f,"%s",n);
		fseek(f, 0 , 0);
	while(fscanf(f, "%s", b)!=EOF)
//	fscanf(f,"%s",b);
	printf("%s",b);
    fclose(f);
}
