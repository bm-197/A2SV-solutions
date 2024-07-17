class Solution {
 public:
  vector<int> findAnagrams(string s, string p) {
    vector<int> ans;
    vector<int> cvec(128);
    int n_p = p.size();

    for (const char c : p)
      ++cvec[c];

    for (int l = 0, r = 0; r < s.size(); ++r) {
      if (--cvec[s[r]] >= 0)
        --n_p;
      while (n_p == 0) {
        if (r - l + 1 == p.size())
          ans.push_back(l);
        if (++cvec[s[l++]] > 0)
          ++n_p;
      }
    }

    return ans;
  }
};