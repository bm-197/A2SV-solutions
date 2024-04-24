class Solution:
    def similarPairs(self, words: List[str]) -> int:
        pairs = 0

        words_tmp = list(map(set, words))

        for i in range(len(words_tmp)):
            for j in range(i + 1, len(words_tmp)):
                if words_tmp[i] == words_tmp[j]:
                    pairs+=1 
        return pairs