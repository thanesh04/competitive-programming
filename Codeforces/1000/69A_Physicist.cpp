#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    int sumx = 0,sumy = 0,sumz = 0;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        sumx += a;
        sumy += a;
        sumz += a;
    }

    if(sumx == 0 && sumy == 0 && sumz == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO";
}