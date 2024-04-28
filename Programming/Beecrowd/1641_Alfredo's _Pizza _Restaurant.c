//https://judge.beecrowd.com/en/problems/view/1641
#include<stdio.h>
#include<math.h>

int main()
{
    int r,b,c,i=1;
    while(1){
        scanf("%d %d %d",&r,&b,&c);

        if(r==0) break;

        float at,pi=3.1415,d;
        d=r*2;
        at=sqrt((b*b)+(c*c));
        if(at<=d)
        {
            printf("Pizza %d fits on the table.\n",i);
        }
        else
        {
            printf("Pizza %d does not fit on the table.\n",i);
        }
        i=i+1;
    }
}
