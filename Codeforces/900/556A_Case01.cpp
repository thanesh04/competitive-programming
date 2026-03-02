#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    for (int i = 0; i < (int)s.length() - 1; i++) {
        if ((s[i] == '0' && s[i+1] == '1') || 
            (s[i] == '1' && s[i+1] == '0')) {
            
            s.erase(i, 2);
            i = max(-1, i - 2);  // step back safely  //this from gpt
        }
    }

    cout << s.length() << endl;
}

/*
optimised code o(1)

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int count0 = 0, count1 = 0;

    for (char c : s) {
        if (c == '0')
            count0++;
        else
            count1++;
    }

    cout << abs(count0 - count1) << endl;

    return 0;
}
 */