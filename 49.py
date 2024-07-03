# 49. Group Anagrams
'''Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.'''

class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        lis = strs[:]
        finalList = []
        a = {}
        for i in range(len(lis)):
            lis[i] = ''.join(sorted(lis[i]))
        for i in range(len(lis)):
            if lis[i] not in a:
                
                a[lis[i]] = [strs[i]]
            else:
                a[lis[i]].append(strs[i])
        for i in a:
            finalList.append(a[i])

        return finalList


        
        

lst = Solution().groupAnagrams(["eat","tea","tan","ate","nat","bat"]) # [["bat"],["nat","tan"],["ate","eat","tea"]]
print(lst)