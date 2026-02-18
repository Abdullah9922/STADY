#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n,m;
    while(tc--){
        scanf("%d %d",&n,&m);

        if(n<=m) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}

//int main()
//{
//    int tc;
//    scanf("%d",&tc);
//
//    int n,m,temp;
//    while(tc--){
//        scanf("%d %d",&n,&m);
//        temp=0;
//
//        if(n%2==0){
//            while(n!=1 && n!=0){
//                n=n/2;
//                temp+=n;
//            }
//
//        }
//
//        else{
//            while(n!=1 && n!=0){
//                n=n/2;
//                temp+=n;
//            }
//            temp=temp+1;
//        }
//        //printf("%d\n",temp);
//        if(temp<=m) printf("NO\n");
//        else printf("YES\n");
//    }
//}
