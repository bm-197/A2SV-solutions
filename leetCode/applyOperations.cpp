class Solution:
    def applyOperations(self, nums: List[int]) -> List[int]:
        i, j = 0, 1

        while j < len(nums):
            if nums[i] == nums[j]:
                nums[i] *= 2
                nums[j] = 0
                i+=2
                j+=2
            else:
                i+=1
                j+=1
        i, j = 0, 1
        
        while j < len(nums):
            if nums[i] == 0 and nums[j] != 0:
                nums[i], nums[j] = nums[j], nums[i]
                i+=1
            else:
                if nums[i] != 0:
                    i+=1
            j+=1
        return nums