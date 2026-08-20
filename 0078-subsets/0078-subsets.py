class Solution(object):
    def sol(self, idx, nums, res, ans):
        if (idx == len(nums)):
            ans.append(res[:])
            return

        res.append(nums[idx])
        self.sol(idx + 1, nums, res, ans)

        res.pop()
        self.sol(idx + 1, nums, res, ans)

    def subsets(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        
        res = []
        ans = []

        self.sol(0, nums, res, ans)

        return ans
