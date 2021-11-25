#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=1e9+7;
ll base=61;
//foyez
vector<ll> inversemod;

ll modpow(ll a,ll p)
{
  a%=mod;
  ll res=1;

  while (p>0)
  {
    if(p&1)
     res=(res*a)%mod;
     a=(a*a)%mod;
     p>>=1;   
  }

  return res;
  
}

ll subHash(ll l,ll r,vector<ll> &prefixHash){

       
        if(l==0) return (prefixHash[r])%mod;
        else return ((prefixHash[r]-prefixHash[l-1])*inversemod[l])%mod;

}

ll hash(string &s){
    ll ans=0;
    ll multi=1;
    for (int i = 0; i < s.size(); i++)
    {
        ll c=s[i];
        ans+=(c*multi)%mod;
        multi=(multi*base)%mod;

    }
    return ans;
}

void inverse_mod(){
    ll multi=1;
   for (int i = 0; i <=100000; i++)
   {
           inversemod.push_back(modpow(multi,mod-2));
             multi=(multi*base)%mod;
   }
   
}
void countpPrefixH(string &s, vector<ll> &hashstore){
    ll ans=0;
    ll multi=1;
   for (int i = 0; i < s.size(); i++)
    {
         ll  c=s[i];
        

        ans+=(c*multi)%mod;
        multi=(multi*base)%mod;
       
        hashstore.push_back(ans);

    }
    
}




int main(){

    inverse_mod();
    string str;
    while (cin>>str)
    {
       vector<ll> prefixHash1;
       vector<ll> prefixHash2;
       countpPrefixH(str,prefixHash1);
     
       
       
       string tem=str;
       reverse(tem.begin(),tem.end());
       countpPrefixH(tem,prefixHash2);
     
       ll index=str.size()-1;
       for (int i=str.size()-2; i>=0; i--)
       {
         ll a=subHash(i,str.size()-1,prefixHash1);
         ll b=subHash(0,str.size()-1-i,prefixHash2);
         if(a==b){
          
             index=i;
         
         }
       }
      
          
           cout<<str;
           for (int i = index-1; i >=0; i--)
           {
              cout<<str[i];
           }
           cout<<endl;


    }
    
}





