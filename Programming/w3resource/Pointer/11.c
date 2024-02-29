#include<stdio.h>

int sort(int *a,int *b,int *c);

int main()
{
    int x,a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    printf("Befor sort: \n");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);

    sort(&a,&b,&c);

    printf("After sort:\n");
    printf("%d\n%d\n%d\n",a,b,c);

}

int sort(int *a, int *b, int *c)
{
    int t;
    t=*a;
    *a=*c;
    *c=t;

    return *a,*b,*c;
}
