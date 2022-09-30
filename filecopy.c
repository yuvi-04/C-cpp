#include <stdio.h>
#include <stddef.h>
int main()
{
    int ch;
    FILE *fin, *fout;
    fin = fopen("somelines.txt", "r");
    if(fin == NULL)
    {
        printf("cannot open file");
        return 0;
    }
    fout = fopen("somelines2.txt", "w");
    if(fout == NULL)
    {
        printf("cannot open file");
        return 0;
    }
    ch = fgetc(fin);
    while(ch != -1)
    {
        fputc(ch, fout);
        ch = fgetc(fin);
    }
    printf("file copied");
    fclose(fin);
    fclose(fout);
}
