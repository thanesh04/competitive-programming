#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n%2020 <= n/2020)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}

/*
n = a*2020 + b*2021
n = 2020(a+b) + b
n = 2020 * k + b
b = n % 2020
b <= k
k = n/2020
*/