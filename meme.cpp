#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//foyez
// hello there

int hr;
int main(){
   ll t;
   cin>>t;
   while (t--)
   {
      string s1,s2;
      cin>>s1>>s2;
      int flag=0;
      for (int l=0; l < s1.size(); l++)
      {
          if(s1[l]==s2[0]){
         int i=l;
         int j=0;
         //int f=0;
         while(s1[i]==s2[j]&&i<s1.size()&&j<s2.size()){
                   //cout<<s1[i]<<" "<<s2[j]<<endl;

           j++;
           i++;
          // f=1;
        }

        //if(f==1){
        i-=2;
         while(s1[i]==s2[j]&&i>=0&&j<s2.size()){
              //  cout<<s1[i]<<" "<<s2[j]<<endl;

           j++;
           i--;
        }
        //cout<<j<<endl;

       // }

         if(j==s2.size()){
         flag=1;
          break;

          }
          }

      }
      if(flag==0){
        cout<<"NO"<<endl;
      }
      else cout<<"YES"<<endl;
   }
}

