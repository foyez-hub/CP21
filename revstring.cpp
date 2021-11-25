#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//foyez

int main(){
    int t;
    cin>>t;
    while (t--)
    {
      string a,b;
      cin>>a>>b;
      int flag=0;
      for (int i = 0; i < a.size(); i++)
      {
        string tem="";
        for (int j=i;j <a.size(); j++)
        {
            tem+=a[j];

            if(tem==b){
            flag=1;
            break;
            }
            else{

                 string tem1=tem;
            for (int k =j-1; k>=0; k--)
            {
                tem1+=a[k];
                if(tem1==b){
                    flag=1;
                    break;
                }
            }

            }
             if(flag==1){
                break;
              }

        }

           if(flag==1){
                break;
              }
     }

    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    
}