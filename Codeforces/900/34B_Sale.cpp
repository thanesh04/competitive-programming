#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int num[100];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }

    int c = sizeof(num) / sizeof(num[0]);

    sort(num, num+n);

    int sum=0;
    for(int i=0;i<m;i++){
        if(num[i] < 0)
            sum += num[i];
    }

    cout<<abs(sum);

    return 0;
}