# An encoded string (s) is given, and the task is to decode it. The encoding pattern is that the occurrence of the string is given at the starting of the string and each string is enclosed by square brackets.
# Note: The occurance of a single string is less than 1000.


# print(i.isdigit())
class Solution:
    def decodedString(self, s):
        stack = []
        result = ""
        for i in s:
            if(i != "]"):
                stack.append(i)
            else:
                while (stack[-1] != "["):
                    result = stack.pop() + result
                stack.pop()
                num = ""
                while(len(stack) and stack[-1].isdigit() ):
                    num = stack.pop() + num
                num = int(num)
                result = result * num
                stack.append(result)
                result = ""
        return "".join(stack)
    
s = "3[b2[ca]]"
sol = Solution()
print(sol.decodedString(s)) # Output: "aaabcbc"