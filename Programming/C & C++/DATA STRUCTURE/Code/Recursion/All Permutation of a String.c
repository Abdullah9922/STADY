#include<stdio.h>

void permutation(char *s,int i,int n)
{
    int j;
    static int count;

    if(i==n){
        count++;
        printf("(%d)%s\t",count,s);
    }

    else{
        for(j=i;j<=n;j++){
            swap((s+i),(s+j));
            permutation(s,i+1,n);
            swap((s+i),(s+j));  // Backtracking
        }
    }
}


void swap (char *x,char *y)
{
    char ch;

    ch=*x;
    *x=*y;
    *y=ch;
}


main()
{
    char *str;
    printf("Enter a string: ");
    gets(str);
    permutation(str,0,strlen(str)-1);
}

