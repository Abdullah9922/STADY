#include<stdio.h>

int main(){
    int l;
    char a[100];
    gets(a);
    l=strlen(a);

    printf("The length of the array is %d \n", l);

    char c[100]={0};
    for(int i=0; i<l; ++i){
        c[a[i]-96]++;
    }
    //size_t sizec = sizeof(c) / sizeof(c[0]);
    int mx=0,st;
    for(int i=0; i<=26; ++i){
        printf("%d ",c[i]);
        if(c[i]>mx) {mx=c[i];st=i;}
    }

    printf("\nThe max value is: %d\n",mx);
    printf("The max counted Character is: %c",st+96);
}
