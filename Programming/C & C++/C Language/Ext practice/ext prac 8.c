 #include<stdio.h>
int main()
{
    int a,b,n=100,x,y,z,m,l,k,h,g,p,f,e,i;
    if(0<a<1000000)
        scanf("%d",&a);
    if (a>=100)
        for (n=100; n<=a; n=n+100)
        {
        b=a/n;
        printf("%d nota(s) de R$ 100,00\n",b);
        break;
        }
    x=n*b;
    y=a-x;
    if (y/50!=0)
    {
        printf("1 nota(s) de R$ 50,00\n");
        z=y-50;
        if(f=z/20)
            {
            printf("%d nota(s) de R$ 20,00\n",f);
            m=z-20;
            if(m/10!=0)
                printf("1 nota(s) de R$ 10,00\n");
                n=m-10;
                if(n/5!=0)
                {
                   printf("1 nota(s) de R$ 5,00\n");
                   l=n-5;
                   if(h=l/2)
                   {
                       printf("%d nota(s) de R$ 2,00\n",h);
                       k=l-2;
                       if(k==1)
                       {
                           printf("1 nota(s) de R$ 1,00\n");
                       }
                   }
                }
            }
    }

 e=y-10;
        if(y/10!=0)
            {
                printf("1 nota(s) de R$ 10,00\n");
                    if(e>=5)
                        printf("%d",e);
               /* {
                   printf("1 nota(s) de R$ 5,00\n");
                   l=e-5;
                   if(h=l/2)
                   {
                       printf("%d nota(s) de R$ 2,00\n",h);
                       k=l-2;
                       if(k==1)
                       {
                           printf("1 nota(s) de R$ 1,00\n");
                       }
                   }
                }
                else if(e<=5)
                {
                    h=e;
                    if(h=l/2)
                   {
                       printf("%d nota(s) de R$ 2,00\n",h);
                       k=l-2;
                       if(k==1)
                       {
                           printf("1 nota(s) de R$ 1,00\n");
                       }
                   }

                }*/
            }
}
