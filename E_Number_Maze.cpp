#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    string n_str;
    int j, k;
    cin >> n_str >> j >> k;

    // 1. Sort the string to ensure we start from the first permutation
    sort(n_str.begin(), n_str.end());

    vector<string> perms;
    // 2. Generate all possible permutations
    do {
        perms.push_back(n_str);
    } while (next_permutation(n_str.begin(), n_str.end()));

    // 3. Retrieve the j-th and k-th permutations (1-indexed)
    string s1 = perms[j - 1];
    string s2 = perms[k - 1];

    int A = 0;
    int total_digits = s1.length();

    // 4. Calculate 'A' (matches in value and position)
    for (int i = 0; i < total_digits; i++) {
        if (s1[i] == s2[i]) {
            A++;
        }
    }

    // 5. Calculate 'B' (matches in value but NOT position)
    // Since all digits are unique and both strings are permutations of each other,
    // any digit that isn't an 'A' must be a 'B'.
    int B = total_digits - A;

    cout << A << "A" << B << "B" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

// Successfully Submitted