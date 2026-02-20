#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    for(int i = 1; i <= n; i++) {
 
        // odd rows -> full snake
        if(i % 2 == 1) {
            for(int j = 1; j <= m; j++)
                cout << "#";
        }
 
        // even rows -> direction depends on row number
        else {
            if(i % 4 == 2) {
                // snake on right
                for(int j = 1; j < m; j++)
                    cout << ".";
                cout << "#";
            }
            else {
                // snake on left
                cout << "#";
                for(int j = 1; j < m; j++)
                    cout << ".";
            }
        }
 
        cout << '\n';
    }
    return 0;
}

// Successfully Submitted