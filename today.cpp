#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//foyez

void print(char c,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<c;
    }
    
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
       string s;
       cin>>s;
       int l=0,r=0,u=0,d=0;
       for (int i = 0; i < s.size(); i++)
       {
           if(s[i]=='L') l++;
           else if(s[i]=='D') d++;
           else if(s[i]=='R') r++;
           else if(s[i]=='U') u++;

       }
       if(r==0 || l==0 || u==0 || d==0){
           
          if(r>=1 && l>=1){
              cout<<2<<endl;
              cout<<"RL"<<endl;

          }
          else if(d>=1 && u>=1){
            cout<<2<<endl;
             cout<<"UD"<<endl;

          }
          else{
                cout<<0<<endl;

          }

          }
       
       else{
        r=min(r,l);
        d=min(d,u);
        cout<<2*(r+d)<<endl;
         print('R',r);
         print('U',d);
         print('L',r);
         print('D',d);
         cout<<endl;
       }




        
        


       

        

    }
}
    
