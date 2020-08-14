#include<iostream>
using namespace std;
int main()
{
    long long int y1,y2,a,b,cd,d;
    char c;
    string s1,s2;
    int d1,d2;
    int tc;
    cin >> tc;
    int cas=0;

    for(int i = 0;i<tc;i++)
    {      int cnt = 0;

    //freopen("1414in.txt","r",stdin);
    //freopen("1414out.txt","w",stdout);

        cin >> s1 >> d1 >> c >> y1;
        cin >> s2 >> d2 >> c >> y2;

        if((s1=="January")||(s1=="February"))
        {
            y1=y1;
        }
        else
        {
            y1++;
        }
        if((s2=="January")||(s2=="February"&&d2<29))
        {

            y2--;
        }

      /////////////Important part////////////////////////

         a =((y2/4)-(y1-1)/4);
         b =((y2/100)-(y1-1)/100);
         cd = ((y2/400)-(y1-1)/400);
         d = a-b+cd;
        cout<<"Case " << ++cas <<": "<< d << endl;

    }
    return 0;
}
