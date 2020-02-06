#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Functions-Pass by reference */

//void addTen(int number[], int n)
void addTen(int *number, int n) // same line 4
{   //number + i mean address number[0] + size type array
    //this case address number[0] + (i*4)
    for (int i = 0; i < n; i++)
    {
        printf(" add Ten [%p] = %d\n" , number+i, *(number+i));// base 16 in pointer
        *(number+i) += 10;//edit value in array number (main funtions)
    }
}
int addTwenty(int *n)
{
    *n += 20;//change value n line 22
    return 1;
}
int main()
{
    int number[]= {4, 5, 6, 7, 8, 9};
    int n = 6;

    /* Funtions 1*/
    addTen(number,n);
    // now {14, 15, 16, 17, 18, 19}
    for (int i = 0; i < n; i++)
    {
        printf("[%p] = %d\n" , number+i, *(number+i));// base 16 address in pointer
    }

    /* Funtions 2*/
    addTwenty(&n); //use & send address to funtions
    // now n = 26
    printf("n = %d\n",n);
}