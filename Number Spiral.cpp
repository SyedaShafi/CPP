# include <bits/stdc++.h>
typedef long long ll;
using namespace std ;
int main()
{
   ll t;
   cin >>t;
   while (t--)
   {
       ll x,y;
       cin>>y>>x;

       if (x>y)
       {
           if (x%2!=0)
           {
               cout<<x*x-y+1;
           }

           else{
            x--;
            cout<<x*x+y;
           }
       }

       else {
        if(y%2==0)
        {
            cout<<y*y-x+1;
        }

        else{
            y--;
            cout<<y*y+x;
        }
       }
       cout<<"\n";
   }
}
