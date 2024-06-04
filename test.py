class Solution:
	def binaryNextNumber(self, s):
		binary = bin(int(s, 2)+1)[2:]
		return binary
	
if __name__ == '__main__':
	s = Solution()
	print(s.binaryNextNumber("1010"))