#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a = n/10;
    int b = (n/100)*10 + n%10;
    int r = max(a,b);

    if(n>0)
        cout<<n<<endl;
    else
        cout<<r<<endl;
    
}