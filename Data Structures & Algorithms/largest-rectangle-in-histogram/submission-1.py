class Solution:
    def largestRectangleArea(self, heights: list [int]) -> int:
        stack  =  []
        maxArea = 0 
        for i,nextHeight in enumerate(heights):
            start = i 
            while stack and  stack[-1][1] > nextHeight :
                idx, height = stack.pop()
                maxArea = max (maxArea, (i-idx)*height )
                start = idx 
            stack.append((start,nextHeight))
        n = len(heights)
        while stack:
            idx, height = stack.pop()
            maxArea = max (maxArea, (n-idx)*height )
        return maxArea