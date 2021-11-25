#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
int main(){

     stack <int> s;
     string str;
     cin>>str;
     int ans=0;
     for (int i = 0; i < str.size(); i++)
     {
         if(!s.empty()){
         if(str[i]==s.top()){
             s.pop();
             ans++;
         }
         else{
             s.push(str[i]);
         }
         }
         else{
             s.push(str[i]);
         }
         
     }

     if(ans%2==1){
         cout<<"YES"<<endl;
     }
     else{
         cout<<"NO"<<endl;
     }
     




}