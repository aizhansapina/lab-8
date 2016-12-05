#include <iostream>
 
using namespace std;
 
int n;
int a[111][111];
 
bool fill(int x, int y, int val, int dst) { // dst = 1 - to down, 2 - to left, 3 - to up, 4 - to right
    // cout << x << " " << y << " " << val << " " << dst << endl;
    if (x < 1 || y < 1 || x > n || y > n || a[x][y] != 0) return false;
    a[x][y] = val;
    if (dst == 1)
        if (!fill(x + 1, y, val - 1, 1))
            fill(x, y - 1, val - 1, 2);
    if (dst == 2)
        if (!fill(x, y - 1, val - 1, 2))
            fill(x - 1, y, val - 1, 3);
    if (dst == 3)
        if (!fill(x - 1, y, val - 1, 3))
            fill(x, y + 1, val - 1, 4);
    if (dst == 4)
        if (!fill(x, y + 1, val - 1, 4))
            fill(x + 1, y, val - 1, 1);
    return true;
}
 
int main() {
    cin >> n;
    n = n + n + 1;
    fill(1, n, n * n - 1, 1);
    // cout << endl;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
 