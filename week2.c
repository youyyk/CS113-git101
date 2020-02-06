#include <stdio.h>
#define for 10000 //declare constant value use (#define || const)
int a; //declare common
int main()
{
    /* Types */

    /* int type */
    printf("%d\n",a);

    /* unsigned not keep negative value*/
    unsigned int b = 3000000000;
    printf("%u\n",b); // %u for print unsigned type

    /* decimal type*/
    float c = 10.0;
    double d = 11.0; // can keep value more than float type

    /*character type*/
    char e = '\0'; // this line e = null character
    printf("--%c--\n",e); // show ---- because null character
    char name[9] = "Yutithorn"; // array of character
    printf("%s\n",name);
    printf("Hello World!\n");
}