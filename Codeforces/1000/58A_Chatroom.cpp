#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;

    string flag = "hello";

    int j=0;
    for(char c : s){
        if (c == flag[j])
            j++;
    }

    cout<<(j==5 ? "YES" : "NO");

    return 0;
}