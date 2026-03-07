#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int num[100000];

        for(int i=0; i<n; i++){
            cin>>num[i];
        }

        sort(num,num+n);

        int max_len = 1;
        int curr_len = 1;

        for(int i=1;i<n; i++){
            if(num[i] - num[i-1] <= k){
                curr_len++;
            }else{
                max_len = max(max_len, curr_len);
                curr_len = 1;
            }
        }

        max_len = max(max_len, curr_len);

        cout<<n-max_len<<endl;
    }

    return 0;
}
