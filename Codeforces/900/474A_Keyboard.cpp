#include<iostream>
using namespace std;

int main(){
    char s;
    cin>>s;
    
    string str;
    cin>>str;

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string output = "";

    for(int i=0;i<str.length();i++){
        for(int j=0;j<keyboard.length();j++){
            if(str[i] == keyboard[j]){
                if(s == 'R')
                    output += keyboard[j-1];
                else
                    output += keyboard[j+1];
                break;
        }
        }
    }
    
    cout<<output;

    return 0;
}