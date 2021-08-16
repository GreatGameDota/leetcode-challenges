class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        isPal = False
        reversedString = ''

        for i in range(0, len(str(x))):
            reversedString = reversedString + str(x)[-i - 1]
        if reversedString == str(x):
            isPal = True
        return isPal
