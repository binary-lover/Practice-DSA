# 1509. Minimum Difference Between Largest and Smallest Value in Three Moves

# You are given an integer array nums.

# In one move, you can choose one element of nums and change it to any value.

# Return the minimum difference between the largest and smallest value of nums after performing at most three moves.

class Solution(object):
    def minDifference(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) <= 4:
            return 0

        nums.sort()
        n = len(nums)
        return min(nums[n-4] - nums[0], nums[n-3] - nums[1], nums[n-2] - nums[2], nums[n-1] - nums[3])

if __name__ == '__main__':
    nums = [2,5,6,71,72,73]
    print(Solution().minDifference(nums)) # 0