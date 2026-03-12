#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;

    string t1,t2,str;
    int count1=0,count2=0;

    for(int i=0;i<n;i++){
        cin>>str;

        if(i==0){
            t1 = str;
            count1++;
        } else if(str == t1){
            count1++;
        }
        else if(str==t2){
            t2 = str;
            count2++;
        }
    }
    if(count1>count2)
        cout<<t1;
    else
        cout<<t2;
        
    return 0;
}