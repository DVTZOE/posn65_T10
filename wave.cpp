#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    string s[5] = {
        "--*-----",
        "-*-*----",
        "*---*---",
        "-----*-*",
        "------*-"
    };
    cin >> n ;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < n; j++)
            cout << s[i];
        cout << endl;
    }
}
