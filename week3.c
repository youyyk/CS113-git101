#include <stdio.h>
#include <stdlib.h>
/* atoi = array to int || atof = array to float  || atol = array to long */
char name[20];
char number[5];
/* control flow if-else*/
int main()
{   
    /* input */ /* gets-fgets */
    printf("Enter name : ");
    gets(name);
    fgets(name, 20, stdin);
    printf("name = %s", name);
    fgets(number, 5, stdin);
    int i = atoi(number); // convert array to int
    double d = atof(number);
    long l = atol(number);
    printf("number = %s , i = %d",number,i);

    /* output */ /* puts-putchar */
    puts(number);
    putchar('c'); //putchar('c') can convert ascii

    /* boolean false */
    int found = 0;
    float isExit = 0.0;
    char c = '\0';
    
    /* logical operator && relational operators*/
    fgets(number, 5, stdin);
    int i = atoi(number);
    if (i > 0 && i < 10) // symbol and (&&)
    {printf("if\n");}
    else if (i >= 10 || !found) // symbol or (||) - not (!) 
    {printf("else if\n");}
    else
    {printf("else\n");}

    /* char in c is ascii */
    if (i > 'a')
    {printf(">a\n");}

    /* loop */
    fgets(number, 5, stdin); //input for control loop

    /* while loop */
    int i = atoi(number);
    int count = 0;
    while (count < i)
    {
        // int c = 5 + count++; // slow
        // int c = 5 + ++count; // fast
        printf("%d\n",count);
        count++;
    }

    /* for loop */
    for (int j = 0; j < i; j++)
    {printf("%d\n",j);}
}