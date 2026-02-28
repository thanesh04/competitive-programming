#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int k;
    cin>>k;

    if(k==0){
        cout<<"0";
        return 0;
    }

    int num[13],numas[13];
    for(int i=0;i<12;i++){
        cin>>num[i];
    }

    sort(num,num+12,greater<int>());

    int count=0,sum=0;
    for(int i=0;i<12;i++){
        sum += num[i];
        count++;
        if(sum >= k)
            break;
    }

    if(sum < k)
        cout << -1;
    else
        cout << count;

    return 0;
}