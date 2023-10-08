#include <stdio.h>
    int main()
{
	FILE *fp1 = fopen("file1.txt", "r");
	FILE *fp2 = fopen("file2.txt", "r");
	FILE *fp3 = fopen("file3.txt", "w");
	char c;
	 if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
	{
		puts("Could not open files");
		return;
	}
	 while ((c = fgetc(fp1)) != EOF)
	fputc(c, fp3);
	 while ((c = fgetc(fp2)) != EOF)
	fputc(c, fp3);
	printf("Merged file1.txt and file2.txt into file3.txt");
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
}
