#include<stdio.h>
main()
{
    int a= -5, b=5;

    if(a<0 && b<0)
    {
        a++;
        b--;
    }
    else if (a<-10 || b>10){
        a--;
        b++;
    }

    else if(a== -5 && b>=2){
        a*=a;//25
        ++b;//6
    }
    ++a;//26
    ++b;//7
    printf("%d",a|b);

    return 0;
}
