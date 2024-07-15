class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int nIdx = 0, tIdx = 0;

        while (nIdx < name.size() && tIdx < typed.size()) {
            if (name[nIdx] != typed[tIdx]) {
                return false;
            }

            char nChar = name[nIdx];
            int nCount = 0;
            while (nIdx < name.size() && name[nIdx] == nChar) {
                nIdx++;
                nCount++;
            }

            char tChar = typed[tIdx];
            int tCount = 0;
            while (tIdx < typed.size() && typed[tIdx] == tChar) {
                tIdx++;
                tCount++;
            }

            if (tCount < nCount) {
                return false;
            }
        }

        return nIdx == name.size() && tIdx == typed.size();
    }
};
