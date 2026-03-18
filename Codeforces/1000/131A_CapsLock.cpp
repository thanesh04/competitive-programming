#include<iostream>
#include<cctype>
using namespace std;

int main(){
    string s;
    cin>>s;

    bool allUp = true;
    bool allExFirstUp = true;

    for (int i=0; i<s.length(); i++) {
        if (!isupper(s[i]))
            allUp = false;
    }

    for (int i = 1; i < s.length(); i++) {
        if (!isupper(s[i]))
            allExFirstUp = false;
    }

    if (allUp || (islower(s[0]) && allExFirstUp)){
        for(int i=0;i<s.length();i++){
            if(islower(s[i]))
                s[i] = toupper(s[i]);
            else
                s[i] = tolower(s[i]);
        }
    }
    else{
        cout<<s;
        return 0;
    }

    cout<<s;
}

/*
either all uppercase or all except first letter
*/