#include <stdio.h>
int main(){
    int A,S;
    scanf("%d %d",&A,&S);
    double abcd = (double)A/2;
    double bc = abcd/S;
    printf("%0.2lf\n",bc);
    return 0;
}
