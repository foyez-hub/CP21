#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//foyez

int main(){


    vector< pair<ll,ll> > a(3);
    for (ll i = 0; i < 3; i++)
    {
      ll tem;
      cin>>tem;
      a.push_back({tem,i+1});
    }

    sort(a.begin(),a.end());
    ll m1=a[0].first;
    ll m2=a[1].first;
    ll big=a[2].first;
    ll ans1;
    ll ans2;
    ll ans3;  
   while (m1>0&&m2>0)
   {
     if(m1+m2==big){


       if( (a[0].second==1 && a[1].second==2) || (a[0].second==2 && a[1].second==1) ){

         a.second==2 || a[0].second==2&&a[1].second==3){
         ans2=abs(a[0].first-m1);
          if(a[0].second==2&&a[2].second==1 || a[0].second==1&&a[2].second==2 ){
           ans1=m1;
           ans2=m2;
         }
         else if(a[1].second==2&&a[2].second==1 || a[1].second==1&&a[2].second==2){
           ans1=m2;
           ans2=m1;
         }
       }
       else if(a[0].second==3&&a[1].second==1 || a[0].second==1&&a[1].second==3){
         ans3=abs(a[0].first-m1);

         if(a[0].second==3&&a[2].second==2 || a[0].second==2&&a[2].second==3 ){
           ans2=m1;
           ans1=m2;
         }
         else if(a[1].second==2&&a[2].second==3 || a[1].second==3&&a[2].second==2){
           ans2=m2;
           ans1=m1;
         }


       }


     cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;

     }
     else{
       m1--;
       m2--;
     }
   }



}




