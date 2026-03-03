#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
     int n,x;
     cin>>n;
     
     for(int k=2; ;k++){
        int p = (int)pow(2,k) - 1;
        if(n % p == 0){
            x = n/p;
            break;
        }
     }
     cout<<x<<endl;
    }
    return 0;
}