//https://judge.beecrowd.com/en/problems/view/2486
#include<stdio.h>
int main ()
{
   while(1){
    int a=0,i=0;
    scanf("%d",&a);
    int b[a],sum=0;
    char c[100];
    if(a==0){
        break;
    }
    else{
        for(i=0;i<a;i++){
            scanf("%d ",&b[i]);
            gets(c);
            {switch(c[2]){
        case 'c':
            sum=sum+120*b[i];
            break;
        case 'r':
            if(c[0]=='m')
            sum=sum+85*b[i];
            else
            sum=sum+50*b[i];
            break;
        case 'm':
            sum=sum+85*b[i];
            break;
        case 'i':
            sum=sum+70*b[i];
            break;
        case 'n':
            sum=sum+56*b[i];
            break;
        case 'o':
            sum=sum+34*b[i];
            break;
            }
            }
        }
    }
    if(sum>130){
            printf("Menos %d mg\n",sum-130);
        }
        else if(sum<110){
            printf("Mais %d mg\n",110-sum);
        }
        else{
            printf("%d mg\n",sum);
        }
    }

}
