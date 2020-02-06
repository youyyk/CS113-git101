#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x = 100;
    int a = 0144; //base 8
    int b = 0x64; //base 16
    printf("x = %d\n",x); //show values
    printf("reference x = %lu\n",&x);// show address
    printf("reference x = %p\n",&x);//address common use show in 16 base (%0x or %p)
    ///////////////////////////////
    printf("Pointer\n");
    /* Pointers */
    /* & = adress , * in declare = declare pointers */
    int number[]={4,5,6,7,8}; //int array[n] have n fit size || member in array
    printf("reference number = %p\n",number); // %p shown address
    printf("reference &number[0] = %p\n",&number[0]);
    /* address + size type array */
    printf("index 2 = %d\n",number[2]);
    printf("reference &number[2] = %p\n",&number[2]); // use & shown address
    printf("reference &number[2] = %p\n",number+2); // same address line 20

    /* Pointers Declare */
    printf("*pointer\n");
    int *ptr = &x; //use & keep address x
    int *arrPtr;
    // arrPtr = number;
    // arrPtr = x; // now pointer keep 100 values in x
    arrPtr = &x; // pointer keep address x
    // not have * shown address || have * shown values in this address
    printf("ptr = %p , value = %d\n",ptr,*ptr);
    number[2] = 500; //change values
    *(arrPtr+2) = 500; //change values by pointer
    /* warning!!! */
    //*(arrPtr+3000) = 500; //change values out of range list
    printf("arrPtr + 2 = %p , value = %d\n",arrPtr+2,*(arrPtr+2));
    printf("arrPtr + 3000 = %p , value = %d\n",arrPtr+3000,*(arrPtr+3000));
    ///////////////////////////

    /* Example */
    printf("Ex\n");
    /* Part 1 shown member in array */
    int number[] = {4,5,6,7,8};
    for (int *ptr = number; ptr <= &number[4]; ptr++)
    {
        printf("[%p] %d\n",ptr, *ptr);
    }
    /* Part 2 loop input (Enter = break) */
    char input[100];
    int count = 0;
    char c;
    while ((c = getchar()) != '\n')
    {
        input[count] = c;
        ++count;
    }
    printf("char arr = %s\n",input);
    /* Part 3 print by use pointers */
    for (char *cPtr = input; *cPtr != '\0'; cPtr++)
    {
        printf("%c\n",*cPtr);
    }

    /* How to use Scanf */
    int a;
    char c;
    char s[100];
    scanf("%d-%c-%s",&a,&c,s);
    printf("%d %c %s",a,c,s);
}