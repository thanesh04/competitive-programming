#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        string s;
        cin>>n>>s;

        int maxl = 0,maxr = 0;
        int currL =0,currR = 0;

        for(int i=0;i<n;i++){
            if(s[i] == '<'){
                currL++;
                maxl = max(maxl,currL);
                currR = 0;
            }
            else{
                currR++;
                maxr = max(maxr,currR);
                currL = 0;
            }
        }
        cout<<max(maxl,maxr)+1<<endl;
    }

    return 0;
}
