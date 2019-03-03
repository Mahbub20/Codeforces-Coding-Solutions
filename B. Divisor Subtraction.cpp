#include<bits/stdc++.h>
# include <math.h>
using namespace std;

int main()
{
    long long int n,tmp,i,minn;
    scanf("%lld",&n);

      tmp = n;

    minn = INFINITY;
    while (tmp%2 == 0)
    {
        minn = 2;
        //printf("%d ", minn);
        tmp = tmp/2;
    }


    for (i = 3; i <= sqrt(tmp); i = i+2)
    {

        while (tmp%i == 0)
        {
             minn = min(minn,i);

            tmp = tmp/i;
        }
    }
    if (tmp > 2){
        minn = tmp;
    }



    cout << minn << endl;
    return 0;
}
