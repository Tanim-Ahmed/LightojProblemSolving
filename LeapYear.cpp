#include <iostream>

using namespace std;

int main()
{
   int n;
   while(cin>>n){
        if((n%4==0)&&(n%100!=00)||(n%400)==0)
        {
            
            cout<<"Leap Year"<<endl;
        }
        else
        {
            
            cout<<"Not Leap Year"<<endl;
        }
    
    
   }
   
   
    return 0;
}
