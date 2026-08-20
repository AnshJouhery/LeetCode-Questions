class Solution(object):
    def findMissingElements(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        mini = min(nums)
        maxi = max(nums)

        n = len(nums)
        s = set(nums)
        res = []

        for i in range(mini , maxi+1):
            if i not in s:
                res.append(i)

        return res