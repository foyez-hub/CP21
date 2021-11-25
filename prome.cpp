#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


 int main(){
    int t;
    cin>>t;
    while (t--)
    {
       ll n,m;
       cin>>n>>m;
       string s;
       cin>>s;
       if(m>1000){
         m=1000;
       }

       for (int i = 0; i <m; i++)
       {
            string tem=s;

           for (int j = 0; j < n; j++)
           {
              int c=0;
              if(s[j]=='0'){

                if(s[j-1]=='1'&&j-1>=0){
                  c++;
                  
                }

                if(s[j+1]=='1'&&j+1<=n-1){
                  c++;
                }

                if(c==1){
                 
                    tem[j]='1';
                 
                }
              }
                             // cout<<"C-> "<<c<<endl;

           }
          // cout<<tem<<endl;

           s=tem;
           
       }

       cout<<s<<endl;
       

    }
    
   
 }