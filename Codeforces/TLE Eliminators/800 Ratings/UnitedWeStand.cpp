#include<iostream>
#include<vector>
#include<algorithm>
#include<chrono>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("/home/acer/Data Structures and Algorithms/input.txt", "r", stdin);
    // freopen("/home/acer/Data Structures and Algorithms/output.txt", "w", stdout);
    // auto start = std::chrono::high_resolution_clock::now();
    
    short t;
    cin >> t;
    while(t--) {
        short n;
        cin >> n;
        vector<long long> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long maxx = *max_element(arr.begin(), arr.end());
        vector<long long> b, c;
        for(long long i : arr) {
            if(i != maxx) {
                b.push_back(i);
            }
            else {
                c.push_back(i);
            }   
        }
        if(b.size() == 0) {
            cout << -1 << endl;
        }
        else {
            cout << b.size() << " " << c.size() << endl;
            for(auto i : b) cout << i << " ";
            cout << endl;
            for(auto i : c) cout << i << " ";
            cout << endl;
        }
    }
    // auto end = std::chrono::high_resolution_clock::now();
    // std::chrono::duration<double> elapsed = end - start;
    // std::cout << "Execution time: " << ceil(elapsed.count()) << " seconds" << std::endl;
    return 0;
}