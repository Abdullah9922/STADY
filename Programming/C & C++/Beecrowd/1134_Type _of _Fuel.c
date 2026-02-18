//https://judge.beecrowd.com/en/problems/view/1134
#include<stdio.h>
int main()
{
    int n,a=0,g=0,d=0;
    scanf("%d",&n);
    if(n>0){

    for( ; n!=4 ; ){
        scanf("%d",&n);
        if(n==1)
            a++;
        else if(n==2)
            g++;
        else if(n==3)
            d++;
        else
            continue;
      }

}


    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);
}
