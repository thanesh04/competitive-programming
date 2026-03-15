#include<iostream>
#include<cctype>
using namespace std;

int main(){
    string s;
    cin>>s;

    string result ="",result2="";
    char insert = '.';

    for(char c : s){
        if(string("aeiouyAEIUOY").find(c) == string::npos) // string::npos = means not found
            result += c;
    }

    for (int i = 0; i < result.length(); i++) {
        result[i] = tolower(result[i]);
    }

    for(char c : result){
        result2 += insert;
        result2 += c;
    }

    cout<<result2;
}