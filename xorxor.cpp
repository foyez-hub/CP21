#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void mycmp(pair<ll,ll> p1, pair<ll,ll> p2){
  return p1.second>p2.second);
}
int main()
{
  ll n;
  cin>>n;


  ll x,y;
  cin>>x>>y;
  vector<pair<ll,ll> > v;
  ll sX=0;
  ll sY=0;
  for (int i = 0; i < n; i++)
  {
    ll t1,t2;
    cin>>t1>>t2;
    sX+=t1;
    sY+=t2;
    v.push_back({t1,t2});

  }


  if(sX<x || sY<y){
    cout<<-1<<endl;
  }
  else{


  for (int i = 0; i < v.size(); i++)
  {
    int flag=0;
    if(sX>sY){
      sort(v.begin(),v.end());
      if(sX-v[0].first>=x && sY-v[0].second>=y){
          flag=1;
        sX-=v[0].first;
        sY-=v[0].second;
        v.erase(0);
      }



    }
    else {
       sort(v.begin(),v.end(),mycmp);
       if(sX-v[0].first>=x && sY-v[0].second>=y){
         flag=1;
        sX-=v[0].first;
        sY-=v[0].second;
        v.erase(0);
      }

    }
    if(flag==0) break;
  }


      cout<<abs(v.size()-n)<<endl;










}
