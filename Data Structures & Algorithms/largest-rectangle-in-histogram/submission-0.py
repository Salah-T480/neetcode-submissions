class Solution:
    def largestRectangleArea(self, heights: list [int]) -> int:
        uniqueHeight = set(heights)
        sorted(uniqueHeight)
        maxArea = 0
        for h in uniqueHeight :
            maxWidth = 0
            #print('h',h)
            for bar in heights :
                if bar >= h :
                    maxWidth+=1
                else :
                    maxArea = max(maxArea,maxWidth*h)
                    #print('a',maxWidth*h)
                    maxWidth = 0
            maxArea = max(maxArea,maxWidth*h)
            #print('a',maxWidth*h)
        return maxArea 
                    
                    
        