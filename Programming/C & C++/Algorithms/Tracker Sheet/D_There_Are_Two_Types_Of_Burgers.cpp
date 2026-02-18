#include<iostream>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    int bun,beef,chik,h,c;
    while(tc--)
    {
        cin>>bun>>beef>>chik;
        cin>>h>>c;

        if(bun % 2 != 0) bun = bun -1;

        int m = 0, flag = 0;
        if(c>h)
        {
            if(chik*2<bun)
            {
                m = chik * c;
                bun = bun - (chik*2);
                flag ++;
            }

            else if(chik*2 == bun)
            {
                cout<<chik*c<<endl;
                continue;
            }

            else
            {
                cout<<(bun/2)*c<<endl;
                continue;
            }
        }



        else if(c == h)
        {
            if(chik*2<bun)
            {
                m = chik * c;
                bun = bun - (chik*2);
                flag ++;
            }

            else if(chik*2 == bun)
            {
                cout<<chik*c<<endl;
                continue;
            }

            else
            {
                cout<<(bun/2)*c<<endl;
                continue;
            }
        }



        else
        {
            if(beef*2<bun)
            {
                m = beef * h;
                bun = bun - (beef*2);
            }

            else if(beef*2 == bun)
            {
                cout<<beef*h<<endl;
                continue;
            }

            else
            {
                cout<<(bun/2)*h<<endl;
                continue;
            }
        }


        if(flag>0)
        {
            if(beef*2<bun)
            {
                cout<<m + (beef * h)<<endl;
                continue;
            }

            else if(beef*2 == bun)
            {
                cout<<(beef*h)+m<<endl;
                continue;
            }

            else
            {
                cout<<((bun/2)*h)+m<<endl;
                continue;
            }
        }

        else if( flag == 0)
        {
            if(chik*2<bun)
            {
                cout<<m+(chik*c)<<endl;
                continue;
            }

            else if(chik*2 == bun)
            {
                cout<<(chik*c)+m<<endl;
                continue;
            }

            else
            {
                cout<<((bun/2)*c)+m<<endl;
                continue;
            }
        }

    }
}