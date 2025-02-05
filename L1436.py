# 1636. Sort Array by Increasing Frequency 
# Given an array of integers nums, sort the array in increasing order based on the frequency of the values. If multiple values have the same frequency, sort them in decreasing order.

def frequencySort( nums):
    """
    :type nums: List[int]
    :rtype: List[int]
    """
    dic = {}
    result = []
    for i in nums:
        if i in dic:
            dic[i] += 1
        else:
            dic[i] = 1
    dic = sorted(dic.items(), key=lambda x: (x[1], -x[0]))
    for i in dic:
        result += [i[0]] * i[1]
    return result


nums = [2,3,1,3,2]
frequencySort(nums)
# print(nums)