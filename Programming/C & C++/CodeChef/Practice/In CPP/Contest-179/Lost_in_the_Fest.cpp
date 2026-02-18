#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc; 
    cin >> tc;

    while(tc--)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }

        int count = 0, x=0, temp = 0;
        for(int i=n-1 ; i>=0; i-- )
        {
            count = 0;
            for(int j=i-1; j>=0; j--)
            {

                if(v[j] >= v[i])
                {
                    //swap(v[i], v[i-1]);

                    temp = v[i]; 
                    v[i] = v[i-1];
                    v[i-1] = temp;

                    count++;
                    x++;
                    break;
                }
            }

            if(count == 0)
            {
                break;
            }
        }

        cout << x << endl;
    }
}