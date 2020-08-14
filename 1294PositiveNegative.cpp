#include<iostream>
using namespace std;
int main()
{

    int tc;
    long long int n,m;
    cin >> tc;
    int c = 0;
    for(int i = 0 ;i < tc ;i++)
    {
        cin >> n >> m;
        /*
          if n = 12,m = 3 , then
    initially a = 1; d = 1
    By our known formula in school we get , 😇
    sum = - (m/2){ (2a) + (m-1)d} +  (m/2){ (2(a+m)) + (m-1)d} - (m/2){ (2(a+2m)) + (m-1)d} + (m/2){ (2(a+3m)) + (m-1)d}
        = (m/2)*(4*m)
        = (m/2)*(( n/m) * m) [ as n/m = 4 here
        = (n*m)/2
        */
        long long int d = m*(n/2);
        cout <<"Case " << ++c <<": "<<d<<endl;

    }
    return 0;
}
