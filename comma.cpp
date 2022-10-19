#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = s.substr(0,s.find('.')).size() - 1; i >= 0; i--) {
        if (cnt == 3) {
            s.insert(i + 1, ",");
            cnt = 0;
        }
        cnt++;
    }
    cout << s ;
}
