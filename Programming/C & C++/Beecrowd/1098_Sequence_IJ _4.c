//https://judge.beecrowd.com/en/problems/view/1098

#include<stdio.h>

int main(){
    double i, j;

    for(i = 0; i <= 2; i += 0.2){
        for(j = 1; j <= 3; j++){
            //printf("I=%.1lf J=%.1lf\n", i, i+j);
            if(i == 0.0 || (i > 0.9 && i < 1.1) || i > 1.8){
                printf("I=%.lf J=%.lf\n", i, i+j);
            }
            else{
                printf("I=%.1lf J=%.1lf\n", i, i+j);
            }
        }
    }

    return 0;
}
