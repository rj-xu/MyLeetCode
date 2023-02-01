class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = {}
        for i in range(0, len(nums)):
            if nums[i] in d:
                return [d[nums[i]], i]
            else:
                d[target - nums[i]] = i
        return []


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = {}
        for i, num in enumerate(nums):
            if target - num in d:
                return [d[target - num], i]
            d[nums[i]] = i
        return []
