#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n,k,x;
        cin>>n>>k>>x; //till n numbers, select k numbers, to make sum x

        long long int min_sum = (k*(k+1))/2;
        long long int max_sum = (k*(2*n - k + 1))/2;

        if(x >= min_sum && x <= max_sum)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
/*
logic,
n=5,k=3,x=7
min_sum = 1+2+3=6
max+sum = 3+4+5=12
so x would be between this range if it is valid.
*/