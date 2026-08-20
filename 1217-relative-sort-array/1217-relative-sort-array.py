class Solution(object):
    def relativeSortArray(self, arr1, arr2):
        """
        :type arr1: List[int]
        :type arr2: List[int]
        :rtype: List[int]
        """
        freq = [0] * 1001

        for i in arr1:
            freq[i] += 1

        res = []

        for i in arr2:
            while(freq[i] > 0):
                res.append(i)
                freq[i] -= 1

        for i in range(1001):
            while(freq[i] > 0):
                res.append(i)
                freq[i] -= 1

        return res