#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
  std::vector<int> v{10, 20, 30, 40, 50};

  // Print vector
  std::cout << "Vector contains :";
  for (int i = 0; i < v.size(); i++)
    std::cout << " " << v[i];

  for (int i = 0; i < 6; i++)
  {
    // auto upper1= std::lower_bound(v.rbegin(), v.rend(), i*5, std::greater());
    // auto upper2 = std::lower_bound(v.begin(), v.end(), i*5);
    //  if(upper1!=v.end())
    //     cout<<abs(*upper1);

    //  if(upper2!=v.end())
    // cout<<" "<<abs(*upper2)<<endl;
    auto iter = std::lower_bound(v.rbegin(), v.rend(), i*5, std::greater<int>());
    if (iter == v.rend())
      std::cout << "no found"<<endl;
    else
      std::cout << *iter<<endl;
  }

  return 0;
}
