#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , m ;
    cin >> m >> n ;
    char a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '*') {
                cout << '*' << ' ';
                continue;
            }
            int cnt = 0;
            for (int k = -1; k <= 1; k++)
                for (int l = -1; l <= 1; l++)
                    if (i + k >= 0 && i + k < n && j + l >= 0 && j + l < m && a[i + k][j + l] == '*')
                        cnt++;
            cout << cnt << " ";
        }
        cout << endl;
    }
}
