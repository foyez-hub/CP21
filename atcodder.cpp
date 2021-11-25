#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
         set<ll> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        if(s.size()>(n/2)+1){
            cout<<"NO"<<endl;
            continue;
        }
        if (n == 1 || n == 2 || s.size()==2)
        {
            cout << "YES" << endl;
            continue;
        }

        if (n % 2 == 1)
        {
            map<ll, ll> mp;
            ll vis[n + 1] = {0};
            ll flag4 = 0;
            for (int i = 0; i < n / 2; i++)
            {
                if (a[i] != a[n - i - 1])
                {

                    mp[a[i]] += -1;
                    mp[a[n - i - 1]] += 1;
                    vis[a[i]] = -1;
                    vis[a[n - i - 1]] = -1;
                    flag4 = 1;
                }
            }
            if (flag4 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                int flag = 0;

                for (int i = 0; i < n; i++)
                {
                    if (vis[a[i]] == -1 && mp[a[i]] == 0)
                    {
                        flag = 1;
                        break;
                    }
                }

                if (flag == 1)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
        else
        {

            map<ll, ll> mp;
            ll vis[n + 1] = {0};
            int flag1 = 0;
            for (int i = 0; i < n / 2; i++)
            {
                if (i != (n / 2) - 1 && (n - i - 1) != (n / 2) && a[i] != a[n - i - 1])
                {

                    mp[a[i]] += -1;
                    mp[a[n - i - 1]] += 1;
                    vis[a[i]] = -1;
                    vis[a[n - i - 1]] = -1;
                    flag1 = 1;
                }
            }
            if (flag1 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {

                int flag2 = -1;

                for (int i = 0; i < n; i++)
                {
                    if (a[n / 2] != a[n / 2 - 1])
                    {
                        if (vis[a[i]] == -1 && mp[a[i]] == 0 && (a[i] == a[n / 2] || a[i] == a[(n / 2) - 1]))
                        {
                            flag2 = 1;
                            break;
                        }
                    }
                    else
                    {
                        if (vis[a[i]] == -1 && mp[a[i]] == 0)
                        {
                            flag2 = 1;
                            break;
                        }
                    }
                }

                if (flag2 == 1)
                {
                    cout << "YES" << endl;
                }
                // else if(flag2==a[n/2] || flag2==a[(n/2)-1] )
                // {
                //     cout << "YES" << endl;
                // }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
}
