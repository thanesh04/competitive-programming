#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char str[101];
    fgets(str,sizeof(str),stdin);

    int count = 1;
    int len = strlen(str);

    for (int i=1; i<len; i++) {
        if (str[i] == str[i - 1]) {
            count++;
            if (count >= 7) {
                cout<<"Yes";
                return 0;
            }
        } else {
            count = 1;
        }
    }

    cout<<"No";
    return 0;
}