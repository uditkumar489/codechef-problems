#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[m];
        for(int i=0;i<m;i++)
          cin>>a[i];
        sort(a,a+m);
        int b[n];
        for(int i=0;i<n;i++)
          b[i]=i+1;
        for(int i=0;i<m;i++)
           b[a[i]-1]=0;
        int chef[n],k=0;
        int assistant[n],l=0;
        for(int i=0;i<n;i++){
            if(b[i]==0)
              continue;
            if(l==k)
              chef[k++]=b[i];
            else assistant[l++]=b[i];
        }
        for(int i=0;i<k;i++)
          cout<<chef[i]<<" ";
        cout<<endl;
        for(int i=0;i<l;i++)
          cout<<assistant[i]<<" ";
          cout<<endl;
    }
    return 0;
}
