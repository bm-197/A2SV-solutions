class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        for (auto& img: image) {
            reverse(img.begin(), img.end());
            for (auto& i: img) {
                i ^= 1;
            }
        }
        return image;
    }
};