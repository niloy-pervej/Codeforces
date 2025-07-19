#include <iostream>
using namespace std;

int main()
{
    int a[5][5];
    int c,d;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
          if (a[i][j]==1)
          {
            c=i;
            d=j;
          }
          
        }
    }
   int x,y;
   if(c>2)
   x=c-2;
   else
   x=2-c;
   if(d>2)
   y=d-2;
   else
   y=2-d;
   cout<<x+y;



    return 0;
}