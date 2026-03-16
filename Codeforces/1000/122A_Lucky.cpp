#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int lucky[] ={
        4,7,
        44,47,74,77,
        444,447,474,477,
        744,747,774,777
    };

    for(int i=0;i<14;i++){
        if(n % lucky[i] == 0){
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";
    return 0;
}


/*
this checks only with 4 and 7 not with 47 or 447

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if((n%4==0) || (n%7==0)){
        cout<<"YES";
        return 0;
    }
    else {
        while (n > 0) {
            int digit = n % 10;

            if (digit != 4 && digit != 7) {
                cout << "NO";
                return 0;
            }
            n /= 10;
        }
    cout<<"YES";
    }

    return 0;
}*/