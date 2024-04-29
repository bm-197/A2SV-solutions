#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long n;
        cin >> n;

        vector<long long> arr;
        int elm;
        for (int i = 0; i < n; ++i) {
            cin >> elm;
            arr.push_back(elm);
        }
        int flag = 1;
        long long sum = 0,  m = -1e11;

        for (int i = 0; i < n; ++i) {
            if (flag) {
                if (arr[i] < 0) {
                    if (m > -1e10) sum +=m;

                    flag = 0;
                    m = -1e11;
                } 
            }
            else {
                if (arr[i] > 0) {
                    if (m > -1e10) sum +=m;
                    flag = 1;
                    m = -1e11;
                }    
            }
            m = max<long long int>(arr[i], m);

        }
        if(m > -1e10) sum+=m;
        cout << sum << endl;
    }
}