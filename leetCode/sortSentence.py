class Solution(object):
    def sortSentence(self, s):
        """
        :type s: str
        :rtype: str
        """
        stm = s.split()
        res_stm = ''
        for i in range(1, len(stm) + 1):
            for j in range(len(stm)):
                if stm[j][-1] == str(i):
                    res_stm += stm[j][:-1]
                    res_stm += " "
        return res_stm[:-1]          
