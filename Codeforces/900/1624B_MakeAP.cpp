#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int a,b,c;
        cin>>a>>b>>c;

        int flag = false;

        if(2*b-c>0 & ((2*b-c)%a ==0))
            cout<<"YES"<<endl;
        else if(((a+c)%(2*b))==0)
            cout<<"YES"<<endl;
        else if(2*b-a>0 & ((2*b-a)%c ==0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

/*r
2b=am+c
m=2b-c/a

2bm=a+c
m=a+c/2b

2b=a+cm
m=2b-a/c
 */