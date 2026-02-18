#include<stdio.h>

int main()
{
    float x,a,b,c;
    scanf("%f %f %f %f",&x,&a,&b,&c);

    if(x<0)
        printf("We can find the value of x using Bashkara's Formula.\n");

    else if(a<0){
        a=((-b*x)-c)/(x*x);
        printf("%.2f\n",a);
    }

    else if(b<0){
        b=((-a*(x*x))-c)/x;
        printf("%.2f\n",b);
    }

    else{
        c=(-a*(x*x))-(b*x);
        printf("%.2f\n",c);
    }
}
