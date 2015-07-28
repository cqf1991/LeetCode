class Solution:
    # @param {integer[]} nums
    # @param {integer} target
    # @return {integer[]}
    def twoSum(self, nums, target):
        i=1
        dic={}
        returnVal=[]
        while nums!=[]:
            if dic.has_key(nums[0]):
                if 2*nums[0]==target:#针对于 [0,4,2,0] 返回[1,4]这样，出现2个相同的数的情况
                    returnVal.append(dic[nums[0]])
                    returnVal.append(i)
                    return returnVal
                else:
                    nums.pop(0)
                    i+=1
                    continue
            dic[nums.pop(0)]=i
            i+=1
        for k in dic:# for key in dic[key],  value=dic[k] # hash的查询在O(1)
            aimTargetKey=target-k  #4
            if dic.has_key(aimTargetKey):
                if(dic[k]<dic[aimTargetKey]):
                    returnVal.append(dic[k])
                    returnVal.append(dic[aimTargetKey])
                else:
                    returnVal.append(dic[aimTargetKey])
                    returnVal.append(dic[k])
                break 
        return returnVal