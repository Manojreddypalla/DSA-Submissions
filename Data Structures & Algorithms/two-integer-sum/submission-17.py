class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        ha={}
        for i,v in enumerate(nums):
                if target-v in ha:
                        return [ha[target-v],i]
                else:
                        ha[v]=i        
         
                   
        