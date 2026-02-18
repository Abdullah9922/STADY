#include<stdio.h>
#include<string.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n,m;
    while(tc--){
        scanf("%d %d",&n,&m);

        char s1[n];
        char s2[m];

        gets(s1);
        gets(s2);

        int J = strlen(s1);
        int Z = strlen(s2);

        int count =0,count2=0,count3=0;

        for(int i= 'a';i<='z';i++){

            for(int j=0;j<=J;j++){
                if(i == (int)s1[j]){
                    count++;
                    break;
                }
            }

            if(count ==0){
                for(int z=0;z<=Z;z++){
                    if(i == (int)s2[z]){
                        count2++;
                        break;
                    }
                }
            }

            if(count == 0 && count2 == 0){
                printf("No\n");
                count3++;
                break;
            }
        }

        if(count3==0)
            printf("Yes\n");


    }
}
