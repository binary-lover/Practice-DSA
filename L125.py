def isPalindrome(self, s):
        # code here
        s = ''.join(e for e in s if e.isalnum())
        s = s.lower()
        return s == s[::-1]