#include<stdio.h>
#include<math.h>

int main()
{
    int n,x,y,z,c;
    scanf("%d%d%d%d%d",&n,&x,&y,&z,&c);

    int c1=pow(c,1);
    int c2=pow(c,2);
    int c3=pow(c,3);

    if(x==c1 || x==c2 || x==c3) printf("Eliminated on 1st hop\n");
    else if((x+y)==c1 || (x+y)==c2 || (x+y)==c3) printf("Eliminated on 2nd hop\n");
    else if((x+y+z)==c1 || (x+y+z)==c2 || (x+y+z)==c3 || (x+y+z)<(n+1)) printf("Eliminated on 3rd hop\n");
    else printf("Safe\n");
}
