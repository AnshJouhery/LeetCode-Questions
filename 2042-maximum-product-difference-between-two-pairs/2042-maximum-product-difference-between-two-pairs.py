class Solution(object):
    def maxProductDifference(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        min1, min2 = float('inf'), float('inf')
        max1, max2 = float('-inf'), float('-inf')

        for x in nums:
            if x <= min1:
                min2 = min1
                min1 = x

            elif x < min2:
                min2 = x

            if x >= max1:
                max2 = max1
                max1 = x

            elif x > max2:
                max2 = x

        return max1 * max2 - min1 * min2