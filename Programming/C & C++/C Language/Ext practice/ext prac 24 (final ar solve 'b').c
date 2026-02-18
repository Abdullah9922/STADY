#include<stdio.h>
int main()
{
    int n,m,sum=0;
    scanf("%d %d",&m,&n);

    int price;
    for(int i=0;i<n;i++){
        scanf("%d",&price);

        int a,b;
        a=price%10;
        price=price/10;
        b=price%10;

        int finalprice=a+b*10;
        sum=sum+finalprice;

    } // kal nun kaoabe oke bondu?

    if(sum<=m) printf("Yess!!Yess!!here we go\n");
    else if(sum>m) printf("Oh!No\n");

}
