#include <bits/stdc++.h>

using namespace std;
int countSmallerElements(int target, const vector<int>& v1) {
    int l = 0, r = v1.size() - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (v1[mid] < target) l = mid + 1;
        else r = mid - 1;
    }
    return l;
}
int main() {
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> v1;
    int tmp;

    for (int i = 0; i < n1; i++) {
        cin >> tmp;
        v1.push_back(tmp);
    }
    
    for (int i = 0; i < n2; i++) {
        cin >> tmp;
        cout << countSmallerElements(tmp, v1) << " ";
    }

    return 0;
}

    
    