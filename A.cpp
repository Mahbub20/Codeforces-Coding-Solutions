#include<bits/stdc++.h>
using namespace std;
int main()
{

   string gems[6] = {"purple","green","blue","orange","red","yellow"};
   string power[6] = {"Power","Time","Space","Soul","Reality","Mind"};
   int t,i,j;
   string name;
   cin >> t;
   for(i = 0;i<t;i++)
   {
     //getchar();
     cin >> name;
     for(j= 0;j<6;j++)
     {
        if(name==gems[j])
        {
          gems[j] = "1";
          //break;
        }
     }

   }

    cout << 6-t << endl;
    for(j = 0;j<6;j++)
     {
        if(gems[j]!="1")cout << power[j] << endl;
     }

  return 0;
}
