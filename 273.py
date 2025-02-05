# 273. Integer to English Words

# Given an integer, convert it to a english words. For example, 123 -> "One Hundred Twenty Three"

#  num range 0 <= num <= 231 - 1


def intToWords(nums):
    once = ["", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"]
    teens = ["", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"]
    tens = ["", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"]
    thousands = ["", "Thousand", "Million", "Billion"]  
    result = "" 
    # strip the number into 3 digits
    def helper(num):
        if num == 0:
            return ""
        elif num < 10:
            return once[num] + " "
        elif num < 20:
            return teens[num % 10] + " "
        elif num < 100:
            return tens[num // 10] + " " + helper(num % 10)
        else:
            return once[num // 100] + " Hundred " + helper(num % 100)
        
    if nums == 0:
        return "Zero"
    i = 0
    while nums > 0:
        if nums % 1000 != 0:
            result = helper(nums % 1000) + thousands[i] + " " + result
        nums //= 1000
        i += 1
    return result.strip()



nums = 1234567
print(intToWords(nums))

