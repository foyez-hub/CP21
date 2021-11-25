#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    // ll t;
    // cin >> t;
    // while (t--)
    // {
     ll n,k;
     cin>>n>>k;
     string s;
     cin>>s;
     ll cnt[26]={0};

     if(n==1&&k==1){
         cout<<1<<endl;
        //  continue;
     }
     else{

     

     for (int i = 1; i < n; i++)
     {
         ll c=1;
         char ch=s[i];
         while (s[i]==s[i-1]&&i<n)
         {
             i++;
             c++;
         }
        // cout<<c<<endl;
         cnt[ch-97]+=(c/k);
         
     }
     sort(cnt,cnt+26);
     cout<<cnt[25]<<endl;
     
    // }
}
}