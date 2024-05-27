class NumArray:

    def __init__(self, nums: List[int]):
        self.nums = nums
        self.prefix = [0]
        for num in self.nums:
            self.prefix.append(self.prefix[-1] + num)
    def sumRange(self, left: int, right: int) -> int:
        leftSum = self.prefix[left]
        rightSum = self.prefix[right + 1]
        return rightSum - leftSum


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(left,right)