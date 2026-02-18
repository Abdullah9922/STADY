#include<stdio.h>
int main()
{
    int x=10; char c=x;
    while(1){
        if(x>10)
            break;
        printf("X = \"%c\" & a = \"%d\"\n,",x,c);
        c=x++;
    }
    return 2.0;
}
