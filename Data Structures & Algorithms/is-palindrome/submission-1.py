class Solution:
    def isPalindrome(self, s: str) -> bool:
        myString  = s.lower()
        myString.replace(' ','')
        n = len(myString)
        right = n-1
        for p in range(n):
            a = myString[p]
            if a.isalnum():
                while right>=0 :
                    if(right<=p)  : break 
                    b = myString[right]
                    if b.isalnum() :
                        if b!=a : 
                            return False
                        else:
                            right-=1
                            break
                    right-=1
        return True
                