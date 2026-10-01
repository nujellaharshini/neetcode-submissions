class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        # time complexity: O(n^2) and space: O(1)
        """
        if len(nums) == 2:
            return [0, 1]

        for i in range(len(nums)):
            for j in range(1, len(nums)):
                if nums[i] + nums[j] == target and i != j:
                    return [i, j]
        """

        # hash map 
        map = {} # val -> array for each element 

        for i in range(len(nums)):
            difference = target - nums[i]
            if difference in map:
                return [map[difference], i]
            map[nums[i]] = i #nums[i]:i


