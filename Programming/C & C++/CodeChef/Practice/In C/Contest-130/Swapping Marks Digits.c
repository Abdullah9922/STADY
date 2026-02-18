#include<stdio.h>
int main()
{
    int a,b,tc,digit1,digit2,num1,num2;
    scanf("%d",&tc);

    for(int i=0;i<tc;i++){
        scanf("%d %d",&a,&b);

        if(a!=10 && a!=20 && a!=30 && a!=40 && a!=50 && a!=60 && a!=70 && a!=80 && a!=90 && b!=10 && b!=20 && b!=30 && b!=40 && b!=50 && b!=60 && b!=70 && b!=80 && b!=90){
            while(a>0){
                digit1=a%10;
                a-=digit1;
                if(a>9) num1+=digit1*10;
                else num1+=digit1;
                a/=10;
            }

            while(b>0){
                digit2=b%10;
                b-=digit2;
                if(b>9) num2+=digit2*10;
                else num2+=digit2;
                b/=10;
            }

            if(num1>num2) printf("Yes\n");
            else printf("No\n");
            digit1=0;digit2=0;num1=0;num2=0;
        }
    }
}
