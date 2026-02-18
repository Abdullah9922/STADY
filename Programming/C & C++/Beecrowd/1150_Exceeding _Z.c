//https://judge.beecrowd.com/en/problems/view/1150
#include<stdio.h>
int main()
{
    int i,b,x,z,cont=0;
    scanf("%d",&x);

    for(  ; z<=x ;  ){  // 21 21 15 30
        scanf("%d",&z);
    }

    for( i=x  ; b<z ; i++ ){

        b=b+i;
        cont++;
    }

    printf("%d\n",cont);
}
