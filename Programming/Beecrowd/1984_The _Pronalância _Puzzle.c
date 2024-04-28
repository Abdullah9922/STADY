//https://judge.beecrowd.com/en/problems/view/1984
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,temp;
    char num[25];
    scanf("%s",num);

    l=strlen(num);

    for(i=0,j=l-1;i<l/2+1;i++,j--){
        temp=num[i];
        num[i]=num[j];
        num[j]=temp;
    }
    printf("%s\n",num);
}
