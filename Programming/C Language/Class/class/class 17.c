#include<stdio.h>
int main()
{
    int cont=0;
    float avg=0;

    int n[7];
    int t[7];
    for(int i=1;i<=7;i++){
        scanf("%d",n[i]);
        avg=avg+n[i];
        if(n[i]>40){
            t[i]=n[i];
            cont++;
        }
    }

    printf("Avrage=%.2f\n",(avg/7));


    for(int i=1;i<=cont;i++){
            printf("%d\n",t[i]);
    }




}
