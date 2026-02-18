#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
    cin>>tc;

    int x,y,z,a,b,c;
    while(tc--){
        cin>>x>>y>>z>>a>>b>>c;

        int count = 0;
        if(x >= a){
            count += a;
        }
        else if(a > x ){
            count += x;
            a = a - x;
            
            if(y >= a){
                count += a;
                y = y - a;
            }
            else if(a > y){
                count += y;
                a = a - y;
                y = 0;
            }

            if(z >= a){
                count += a;
                z = z - a;
            }
            else if(a > z){
                count += z;
                a = a - z;
                z = 0;
            }
        }


        if(y >= b){
            count += b;
            y = y - b;
        }
        else if(b > y ){
            count += y;
            y = 0;
            b = b - y;
            

            if(z >= b){
                count += b;
                z = z - b;
            }
            else if(b > z){
                count += z;
                z = 0;
            }
        }


        if(z >= c){
            count += c;
        }
        else if(c > z ){
            count += z;  
        }

        cout<<count<<endl;
        
    }

}
