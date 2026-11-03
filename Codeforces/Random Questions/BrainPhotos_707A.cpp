#include<iostream>
#include<vector>
#include<algorithm>
#include<chrono>
#include <cmath>
using namespace std;

void solve() {
    // Your Code snippet here.
    short n, m;
    cin >> n >> m;
    long cnt = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            char c;
            cin >> c;
            if(c == 'B' || c == 'G' || c== 'W') {
                cnt++;
            }
        }
    }
    if(cnt == n*m) {
        cout << "#Black&White" << endl;
    }
    else {
        cout << "#Color" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("/home/acer/Data Structures and Algorithms/input.txt", "r", stdin);
    // freopen("/home/acer/Data Structures and Algorithms/output.txt", "w", stdout);
    // auto start = std::chrono::high_resolution_clock::now();
    solve();
    // auto end = std::chrono::high_resolution_clock::now();
    // std::chrono::duration<double> elapsed = end - start;
    // std::cout << "Execution time: " << ceil(elapsed.count()) << " seconds" << std::endl;
    return 0;
}