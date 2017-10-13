#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main(){
    long long a,b,m;


       cin>>a;
       cin>>b;
       m= abs(a-b);
       if(m%10 < 9){
          cout<<m+1<<endl;
       }else{
          cout<<m-1<<endl;
       }

    return 0;
}
