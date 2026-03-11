#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long int n,m,a;
    cin>>n>>m>>a;

    long long int p = ceil((double)n/a);
    long long int q = ceil((double)m/a);

    cout<<p*q;
}
