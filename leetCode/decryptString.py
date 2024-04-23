class Solution:
    def freqAlphabets(self, s: str) -> str:
        wrd = []

        i = 0
        while i < len(s):
            if i + 2 < len(s) and s[i+2] == "#":
                wrd.append(chr(int(s[i:i+2]) + 96))
                i += 3
            else:
                wrd.append(chr(int(s[i]) + 96))
                i+=1
        return "".join(wrd)

