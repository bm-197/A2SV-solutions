#include <vector>
#include <math.h>
#include <iostream>

using namespace std;
class Solution {
public:
    bool judgeSquareSum(int c) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        long long left=1;
        long long right=sqrt(c);
        if((int)sqrt(c)*(int)sqrt(c)==c) return true;
        while(left<=right){
            long long product=left*left+ right*right;
            if(product>c) right-=1;
            else if (product<c) left+=1;
            else return true;
        }
        return false;
    }
};