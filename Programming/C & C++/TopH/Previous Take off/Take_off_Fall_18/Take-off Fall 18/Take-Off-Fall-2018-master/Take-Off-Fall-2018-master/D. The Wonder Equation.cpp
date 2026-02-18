#include <stdio.h>
#include <math.h>
int main() {
    int x, a, b, c;
    double ans;
    scanf("%d %d %d %d",&x,&a,&b,&c);
    if(x < 0){
        printf("We can find the value of x using Bashkara's Formula.\n");
        return 0;
    }
    else if(a < 0) ans = (-(c / x) - b) / x;
    else if(b < 0) ans = (-(a * x) - (c / x));
    else if(c < 0) ans = -((a * x * x) + (b * x));
    printf("%.2lf\n", ans);
    
    return 0;
}