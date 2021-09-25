#include <stdio.h>
#include <stdlib.h>

/* Function declaration */
int compareFile(FILE * fPtr1, FILE * fPtr2, int * line, int * col);
int main()
{
    /* File pointer to hold reference of input file */
    FILE * fPtr1; 
    FILE * fPtr2;

    int diff;
    int line, col;

    fPtr1 = fopen("input.txt", "r");
    fPtr2 = fopen("input2.txt", "r");

    if (fPtr1 == NULL || fPtr2 == NULL)
    {
        
        printf("\nUnable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        return 0;
    }
    
    diff = compareFile(fPtr1, fPtr2, &line, &col);
    if (diff == 0)
    {
        printf("\nBoth files are equal.");
    }
    else 
    {
    	fPtr1 = fopen("input.txt", "r");
		char c=fgetc(fPtr1);
		while(c!=EOF){
            printf("%c",c);
        	c=fgetc(fPtr1);
    	}
        printf("\nFiles are not equal.\n");
        printf("Line: %d, col: %d\n", line, col);
    }
    fclose(fPtr1);
    fclose(fPtr2);
    return 0;
}

int compareFile(FILE * fPtr1, FILE * fPtr2, int * line, int * col)
{
    char ch1, ch2;
    *line = 1;
    *col  = 0;
    do
    {
        ch1 = fgetc(fPtr1);
        ch2 = fgetc(fPtr2);
        
        if (ch1 == '\n')
        {
            *line += 1;
            *col = 0;

        }

        if (ch1 != ch2)
            return -1;

        *col  += 1;

    } while (ch1 != EOF && ch2 != EOF);
    if (ch1 == EOF && ch2 == EOF)
        return 0;
    else
        return -1;
}