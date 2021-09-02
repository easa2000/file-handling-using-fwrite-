// using fwrite()

#include<stdio.h>
void main()
{
    FILE *fp;
    char str[] = "This is the string that was written in c programming to store in the file.";
    fp = fopen("fwrite_example.txt","w");
    fwrite(str, 1, sizeof(str), fp);
    fclose(fp);
}
