#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
    cin>>tc;

    int n;
    while(tc--){
        cin>>n;

        string s1;
        cin>>s1;

        char s[n];
        for(int i=0; i<n; i++){
            s[i] = s1[i];
        }

        for(int i=0; i<n-1; i++){

            if(s[i] != s[i+1]){

                if(i+2 < n){

                    if(s[i] == s[i+2]){
                        s[i] = 'x';
                    }
                    else if(s[i+1] == s[i+2]){
                        s[i+1] = 'x';
                    }
                    
                }

                else{
                    s[i] = 'x';
                }
            }

            
        }


        int count = 0;
        for(int i=0; i<n; i++){

            if(s[i] != 'x') count++;
        }


        if(count > 2){
            for(int i=n-1; i>=0; i--){

                if(s[i] != s[i-1]){

                    if(i-2 >= 0){

                        if(s[i] == s[i-2]){
                            s[i] = 'x';
                        }
                        else if(s[i-1] == s[i-2]){
                            s[i-1] = 'x';
                        }
                        
                    }

                    else{
                        s[i] = 'x';
                    }
                }
            }
        }



        // cout<<endl;
        // for(int i=0; i<n; i++){
        //     cout<<s[i]<<" ";
        // }
        // cout<<endl;


        count = 0;
        for(int i=0; i<n; i++){

            if(s[i] != 'x') count++;
        }

        cout<<count<<endl;
    }

}
