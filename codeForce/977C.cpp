#include <bits/stdc++.h>

using namespace std;

int main() {
    string n_tmp, k_tmp;
    cin >> n_tmp >> k_tmp;

    int n = stoi(n_tmp), k = stoi(k_tmp);
    vector<int> arr;

    for(int i = 0; i < n; ++i) {
        string elm;

        cin >> elm;
        arr.push_back(stoi(elm)); 
    }

    sort(arr.begin(), arr.end());

    if (k == 0 && arr[0] > 1) cout << 1 << endl;
    else if (k == 0 && arr[0] == 1) cout << -1 << endl;

    else if (k <= n-1) {
        if (arr[k] == arr[k - 1]) cout << -1 << endl;
        else cout << arr[k - 1] << endl;
    }
    else if (k == n) cout << arr[k-1] << endl; 
    
}