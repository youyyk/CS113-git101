#include <stdio.h>
#include <stdlib.h>
/* Functions-Pass by value */
/* Global Declare */
int x = 100;
/* Funtions Declare type 1 */
int addTen(int x) //Declare in Funtions = local
{   /* x in this funtions is local */
    x = x+10;
    printf("addTen = %d\n",x);
    return x;
    /* this x can use only in this funtions */
}
/* Funtions Declare type 2 */
int addTwenty();
/* Funtions Main */
int main()
{
    //int x = 30; //test case local in main
    int y = addTen(x); // call funtions type 1
    printf("addTen main = %d\n",y);
    printf("x global = %d\n",x); // after funtions 1 x = 100
    int z = addTwenty(); // call funtions type 2
    printf("addTwenty main = %d\n",z);
    printf("x global = %d",x); // after funtions 2.1 x = 120
}
/* Funtions Declare type 2.1 */
int addTwenty()
{   
    /* x not in this funtions */
    x += 20; // this x from global x-line 5
    printf("x addTwenty = %d\n",x);
    return x;
    /* this x change x in global */
}