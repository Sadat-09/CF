
#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef long long int ll;
typedef long double LD;
#define w(t)     \
    int t;       \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
using namespace std;
bool check_prime(int n) {
  bool is_prime = true;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}


void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

  int e=max((3*a/10),a-(a/250)*c);    
    int f=max((3*b/10),b-(b/250)*d); 
    if(e==f) {
        cout<<"Tie";
        return;
    }
int g=max(e,f);
    if(g==e){
        cout<<"Misha";
    }
    if(g==f) cout<<"Vasya"; 
}

int main()
{
    IO;
    solve();
    // w(t);
    return 0;
}