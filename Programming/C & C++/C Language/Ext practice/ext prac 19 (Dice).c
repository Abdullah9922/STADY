int n,k;   cin>>n>>k;
      int a[n]; for(int i=0; i<n; ++i) cin>>a[i];
      sort(a,a+n);
      long long sum=0;
      for(int i=0; i<n; ++i){
          if(a[i]<4 && k){
              if(a[i]==1) sum+=6;
              else if(a[i]==2) sum+=5;
              else if(a[i]==3) sum+=4;
              k--;
          }else{
              sum+=a[i];
          }

          //if(k==0) break;
      }
      cout<<sum<<endl;
