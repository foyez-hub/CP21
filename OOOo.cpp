#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
 
    while (t--)
    {
         ll n;
         cin>>n;
         string s;
         cin>>s;
         vector<string> subs;
         for (int i = 0; i <26; i++)
         {
             string tem="";
             tem+='a'+i;
             subs.push_back(tem);
         }
          for (int i = 0; i <26; i++)
         {
             for (int j = 0; j < 26; j++)
             {
                  string tem="";
                  tem+='a'+i;
                  tem+='a'+j;
                 // cout<<tem<<endl;
                   subs.push_back(tem);
             }
         }
          for (int i = 0; i <26; i++)
         {
             for (int j = 0; j < 26; j++)
             {
                  string tem="";
                  tem+='a';
                  tem+='a'+i;
                  tem+='a'+j;
                 // cout<<tem<<endl;
                   subs.push_back(tem);
             }
         }

         string anss;
         for (int i = 0; i < subs.size(); i++)
         {
            size_t found = s.find(subs[i]);
            if (found == string::npos){
                anss=subs[i];
                break;
            }
          
         }
         cout<<anss<<endl;
         


    }

   
}