#include<iostream>
using namespace std;

int main(){
    int n,a,b;
    cin>>n>>a>>b;

    int min = max(a+1, n-b);

    int result = n-min+1;
    cout<<result;

    return 0;
}