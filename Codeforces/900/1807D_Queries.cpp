#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,q;
        cin>>n>>q;

        long long arr[200001];
        long long prefix[200001];

        prefix[0] = 0;

        for(int i=1;i<=n;i++){
            cin >> arr[i];
            prefix[i] = prefix[i - 1] + arr[i];
        }

        long long total_sum = (prefix[n]) % 2;

        while(q--){
            int l,r;
            long long k;
            cin>>l>>r>>k;

            long long segment_sum = (prefix[r] - prefix[l - 1]) % 2;
            long long length = r - l + 1;

            long long new_sum = (total_sum - segment_sum + (length % 2) * (k % 2)) % 2;

            if(new_sum % 2 == 0)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }

    return 0;
}
