#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


vector<ll> vi;
set<ll> div;

void printDivisors(ll n)
{


   // vector<ll> v;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                div.insert(i);
            else {

                   if(i!=1){
                     div.insert(i);

                   }
                     div.insert(n/i);

            }
        }
    }

      for(auto i: div){
          vi.push_back(i);
      }



}

void SieveOfEratosthenes(ll m)
{

    bool prime[m + 1];
    memset(prime, true, sizeof(prime));


    for (int i = 0; i <= vi.size(); i++)
    {
        ll p=vi[i];


        if (prime[p] == true&&p<=m)
        {

            for (int i = p; i <= m; i += p)
                prime[i] = false;
        }
    }

    for (int p = 1; p <= m; p++)
        if (prime[p])
            cout << p << " ";
}

int main()
{

    ll n,m;
    cin>>n>>m;

    for (int i = 0; i < n; i++)
    {
        ll tem;
        cin>>tem;

        printDivisors(tem);

    }
    SieveOfEratosthenes(m);






}
