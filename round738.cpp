#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<ll> > adj(1000000);
ll visited[1000000]={0};

void dfs(ll node){

    visited[node]=1;
    
    for (int i = 0; i < adj[node].size(); i++)
    {
        if(visited[adj[node][i]]==0)
        dfs(adj[node][i]);
    }
    

}
ll m=1e9+7;
ll modpow(ll a,ll p)
{
  a%=m;
  ll res=1;

  while (p>0)
  {
    if(p&1)
     res=(res*a)%m;
     a=(a*a)%m;
     p>>=1;   //p/=2;
  }

  return res;
  
}

 

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        ll b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
         for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }


          adj.clear();
          for (int i = 0; i < n; ++i)
          adj[i].clear();

            for (int i =0; i <=100000; i++)
           {
               visited[i]=0;
              
            }


        for (int i = 0; i < n; i++)
        {
            
            
            adj[a[i]-1].push_back(b[i]-1);
            adj[b[i]-1].push_back(a[i]-1);
        }

        ll comp=0;
        for (int i = 0; i < n; i++)
        {
            if(visited[i]==0){
                dfs(i);
                comp++;
            }
        }

        cout<<modpow(2,comp)<<endl;
        
     
    }
}
