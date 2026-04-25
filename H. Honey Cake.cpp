#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()
vector<int> prime_factorization(int n) {
    vector<int> s;

    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            s.push_back(i);
            n /= i;
        }
    }

    if (n > 1) {
        s.push_back(n);
    }

    return s;
}
void solve() {
    vector<pair<int, int>> dim(3);
    for (int i = 0; i < 3; i++) {
        cin >> dim[i].first;
        dim[i].second = 1;
    }

    int n;
    cin >> n;

    vector<int> v = prime_factorization(n);

    for (int p : v) {
        bool assigned = false;

        for (int i = 0; i < 3; i++) {
            if (dim[i].first % p == 0) {
                dim[i].first /= p;
                dim[i].second *= p;
                assigned = true;
                break;
            }
        }

        if (!assigned) {
            cout << -1 << endl;
            return;
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << dim[i].second - 1 << (i == 2 ? "" : " ");
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    

    return 0;
}

// Successfully Submitted