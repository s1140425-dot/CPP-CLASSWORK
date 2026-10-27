#include <iostream>
#include <numeric> 

using namespace std;


long long ans[501];

void precompute() {
    ans[1] = 0;
 
    for (int n = 2; n < 501; n++) {
        long long sum = 0;
        for (int i = 1; i < n; i++) {
            sum += std::gcd(i, n);
        }
        ans[n] = ans[n - 1] + sum;
    }
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    precompute();
    
    int n;
    while (cin >> n && n != 0) {
        cout << ans[n] << "\n";
    }
    
    return 0;
}
