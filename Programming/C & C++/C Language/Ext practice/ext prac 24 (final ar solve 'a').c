#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a<b){
        if(a<c) printf("Alix will get chocolate\n");
        else printf("David will get chocolate\n");
    }
    else{  // bondu tomr ar ager ber chap r nun kaoanor kotha silo?
        if(b<c) printf("Sam will get chocolate\n");
        else printf("David will get chocolate\n");
    }
}
