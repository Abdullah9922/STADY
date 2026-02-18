//https://judge.beecrowd.com/en/problems/view/1238

#include<stdio.h>
#include<string.h>


int main()
{
    int i,j,n,l1,l2,l;
    char str1[52],str2[52];

    scanf("%d",&n);

    while(n--){
        scanf("%s %s",str1,str2);

        l1 = strlen(str1);
        l2 = strlen(str2);

        if(l1 >= l2) l= l1;
        else l = l2;

        for(j=0;j<l;j++){
            if(j < l1) printf("%c",str1[j]);
            if(j < l2) printf("%c",str2[j]);
        }
        printf("\n");
    }
}
