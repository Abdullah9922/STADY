//https://judge.beecrowd.com/en/problems/view/1279
#include<stdio.h>
int main()
{
    int year;

    while (scanf("%d",&year)!=EOF){

        int flag=0;

        if(year%4==0 && year%100!=0 || year%400==0){
            printf("This is leap year.\n");
            flag=1;
        }

        if(year%15==0){
            printf("This is huluculu festival year.\n");
            flag=1;
        }
        if(year%55==0 && flag)
            printf("This is bulukulu festival year.\n");

        if(!flag)
             printf("This is an ordinary year.\n");

        printf("\n");
        flag = 0;
    }

}
