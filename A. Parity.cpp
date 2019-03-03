#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
int multiply(int x, int res[], int res_size) {

// Initialize carry
int carry = 0;

// One by one multiply n with
// individual digits of res[]
for (int i = 0; i < res_size; i++) {
    int prod = res[i] * x + carry;

    // Store last digit of
    // 'prod' in res[]
    res[i] = prod % 10;

    // Put rest in carry
    carry = prod / 10;
}

// Put carry in res and
// increase result size
while (carry) {
    res[res_size] = carry % 10;
    carry = carry / 10;
    res_size++;
}
return res_size;
}

// This function finds
// power of a number x
void power(int x, int n)
{

//printing value "1" for power = 0
if(n == 0 ){
    cout<<"1";
    return;
}


int res[MAX];
int res_size = 0;
int temp = x;

// Initialize result
while (temp != 0) {
    res[res_size++] = temp % 10;
    temp = temp / 10;
}

// Multiply x n times
// (x^n = x*x*x....n times)
for (int i = 2; i <= n; i++)
    res_size = multiply(x, res, res_size);

for (int i = res_size - 1; i >= 0; i--)
    cout << res[i];
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int b,n,r,t,sum = 0,k;
  cin >> b >> n;
  t = n-1;
  while(n--)
  {
    cin >> k;
    r = k*power(b,t--);
    //cout << r << endl;
    sum+=r;
  }
  cout << sum << endl;
}
