#include<stdio.h>
int main(void)
{
    int b,a='a';
    do{
        float b = a++;
        printf("Inside b= \"%c\" and a = \"%010d\"\n",a,b);
    }while(b<100);

    return 23;
}
