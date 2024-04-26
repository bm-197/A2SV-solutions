#include <bits/stdc++.h>
#include <cmath>

using namespace std;

string removeSmallest(deque<int> dequeNums, int n);

int main() {
    string t_tmp;
    cin >> t_tmp;
    int t = stoi(t_tmp);
    

    for (int test = 0; test < t; ++test) {
        string a_tmp, elm;
        deque<int> dequeNums;

        cin >> a_tmp;
        int a = stoi(a_tmp);

        for (int i = 0; i < a; ++i) {
            cin >> elm;
            dequeNums.push_back(stoi(elm));
        }
        cout << removeSmallest(dequeNums, a) << endl;
    }
}

string removeSmallest(deque<int> dequeNums, int n) {
    sort(dequeNums.begin(), dequeNums.end());

    for (int i = 0; i < n - 1; ++i) {
        if (abs(dequeNums[0] - dequeNums[1]) <= 1) {
            dequeNums.pop_front();
        }
    }

    if (dequeNums.size() == 1) return "YES";
    return "NO";
}