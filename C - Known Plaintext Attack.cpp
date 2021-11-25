#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//foyez


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        
   ll n;
   cin>>n;
   ll a[n];
  vector<ll> v;
  map<ll,bool> ma;


      for (int i = 0; i < n; i++)
      {
       cin>>a[i];
       v.push_back(a[i]);
       ma.insert({a[i],true});
      }

      //map<ll,bool> ma1;
      vector<ll> v1;
      set<ll> mys;
     for (int i = 0; i < n; i++)
     {
         for (int j =i+1; j < n; j++)
         {
             ll tem=abs(v[i]-v[j]);
             if(ma[tem]!=true){
                  ma.insert({tem,true});
                  // v1.push_back(tem);
                   mys.insert(tem);
             }
             
         }
         
               

         
     }
     

   
    }
   
   
}