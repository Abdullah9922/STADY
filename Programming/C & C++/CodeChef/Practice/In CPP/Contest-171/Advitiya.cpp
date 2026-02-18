#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
    cin>>tc;

    string s;
    while(tc--){
        cin>>s;

        int steps = 0;
        if(s[0] != 'A'){
            while( s[0] != 'A'){
                s[0]++;
                if(s[0] > 'Z') s[0] = 'A';
                steps++;
            }

        }

        if(s[1] != 'D'){
            while( s[1] != 'D'){
                s[1]++;
                if(s[1] > 'Z') s[1] = 'A';
                steps++;
            }
        }

        if(s[2] != 'V'){
            while( s[2] != 'V'){
                s[2]++;
                if(s[2] > 'Z') s[2] = 'A';
                steps++;
            }
        }

        if(s[3] != 'I'){
            while( s[3] != 'I'){
                s[3]++;
                if(s[3] > 'Z') s[3] = 'A';
                steps++;
            }
        }

        if(s[4] != 'T'){
            while( s[4] != 'T'){
                s[4]++;
                if(s[4] > 'Z') s[4] = 'A';
                steps++;
            }
        }

        if(s[5] != 'I'){
            while( s[5] != 'I'){
                s[5]++;
                if(s[5] > 'Z') s[5] = 'A';
                steps++;
            }
        }

        if(s[6] != 'Y'){
            while( s[6] != 'Y'){
                s[6]++;
                if(s[6] > 'Z') s[6] = 'A';
                steps++;
            }
        }

        if(s[7] != 'A'){
            while( s[7] != 'A'){
                s[7]++;
                if(s[7] > 'Z') s[7] = 'A';
                steps++;
            }
        }

        cout<<steps<<endl;
    }

}