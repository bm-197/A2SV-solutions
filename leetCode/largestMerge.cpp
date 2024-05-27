#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    string largestMerge(string word1, string word2) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        int i = 0,  j = 0;
        string result;

        for (; i < word1.size() && j < word2.size() ;) {
        	if (word1[i] > word2[j]) result += word1[i], ++i;
        	else if (word1[i] < word2[j]) result += word2[j], ++j;
            else{
                string s = word1.substr(i+1);
                string t = word2.substr(j+1);
                if(s > t) result += word1[i],i++;
                else result += word2[j],j++;
            }
        }
        while (i < word1.size()) result += word1[i], ++i;
        while (j < word2.size()) result += word2[j], ++j;

        return result;
    }
};
