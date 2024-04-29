#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        vector<int> arr;

        cin >> n;

        int elm;
        for (int i = 0; i < n; ++i) {
            cin >> elm;
            arr.push_back(elm);
        }

        int sum = 0, flag = 1;
        int m = INT_MIN;

        for (int i = 0; i < n; ++i) {
            if (flag) {
                if (arr[i] < 0) {
                    if (m > INT_MIN + 1) sum +=m;

                    flag = 0;
                    m = INT_MIN;
                } 
            }
            else {
                if (arr[i] > 0) {
                    if (m > INT_MIN + 1) sum += m;
                    flag = 1;
                    m = INT_MIN;
                }   
            }
            m = max(arr[i], m);

        }
        if(m > INT_MIN + 1) sum+=m;
        cout << sum << endl;
    }
}