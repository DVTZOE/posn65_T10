#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , m , ans1 = INT_MAX , ans2 = INT_MIN,cnt=0;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    // find same number in a row
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j]==a[i+1][j]) {
                cnt++;
                if (cnt>ans2||(cnt==ans2&&a[i][j]<ans1)) {
                    ans1=a[i][j];
                    ans2=cnt;
                }
            }
            else
                cnt=0;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j]==a[i][j+1]) {
                cnt++;
                if (cnt>ans2||(cnt==ans2&&a[i][j]<ans1)) {
                    ans1=a[i][j];
                    ans2=cnt;
                }
            }
            else
                cnt=0;
        }
    }
    cout << ans1 << " " << ans2;
}
