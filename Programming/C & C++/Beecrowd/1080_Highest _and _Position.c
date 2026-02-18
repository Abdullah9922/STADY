//https://judge.beecrowd.com/en/problems/view/1080
#include<stdio.h>
int main()
{
    int p,c=0;
    int n[1000];
    for(int i=1;i<=100;i++){
        scanf("%d",&n[i]);
            if(n[i]>c){
                c=n[i];
                p=i;
            }
    }

    printf("%d\n",c);
    printf("%d\n",p);

}
