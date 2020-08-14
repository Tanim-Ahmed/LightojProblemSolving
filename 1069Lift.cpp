#include<iostream>
using namespace std;
int main()
{
    int tc;
    int a,b;
     int sum ;
    int cas = 0;
    cin>>tc;
    for(int i = 0;i<tc;i++)
    {
        cin >> a >> b;
        if(a<=b)
        {
               int d = (b-a);


        int e = d*4;
        //cout << e;
        int f = a*4;

        int sum = (e + f )+ 19;
         cout<<"Case " << ++cas <<": " << sum <<endl;

        }
     else
     {
         sum=(a-b)*4+(a*4)+19;

          cout<<"Case " << ++cas <<": " << sum <<endl;
     }


    }
    return 0;
}
