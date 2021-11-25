#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//foyez


int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    ll v,c,t1,t2;
    cin>>v>>c>>t1>>t2;

    if(t1>t2){
      
      ll op=t1-t2;
      ll t=-1;
      ll f=-1;
      
         if(v>c){
         t=v-c;
         v-=min(op,t);
          op-=min(op,t);
      }
      else{

         f=c-v;
        //  cout<<f<<" "<<op<<endl;
         c-=min(f,op);
         op-=min(f,op);
      }
      // cout<<v<<" "<<c<<endl;

      if(op%2==0){
        v-=op/2;
        c-=op/2;
        op-=2*(op/2);
      }
      else{
         v-=op/2;
        c-=(op/2)+1;
         op-=2*(op/2)+1;


      }
      if(op>=1){
        cout<<"NO"<<endl;
         continue;
      }
       t1=t2;
     

    }
    else{
        

          ll op=t2-t1;
      ll t=-1;
      ll f=-1;
      if(v>c){
         f=c-v;
         c-=min(f,op);
         op-=min(f,op);
      }
      else{
          t=v-c;
         v-=min(op,t);
          op-=min(op,t);

      }

      if(op%2==0){
        v-=op/2;
        c-=(op/2)+1;
         op-=2*(op/2)+1;

      }
      else{
        

         v-=op/2;
        c-=op/2;
         op-=2*(op/2);

      }
       if(op>=1){
        cout<<"NO"<<endl;
         continue;
      }
       t2=t1;

    }

    if(c>=t1&&v>=t1){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }



  }

}
