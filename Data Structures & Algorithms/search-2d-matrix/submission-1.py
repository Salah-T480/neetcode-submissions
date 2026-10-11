class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        row,column = len(matrix),len(matrix[0])
        top_row, bottom_row = 0, row -1 
        while (bottom_row-top_row -1)>=1:
            mid_row  = top_row + (bottom_row-top_row)//2 
            if target == matrix[mid_row][-1] : return True
            if target < matrix[mid_row][-1] :
                bottom_row = mid_row 
            else  : top_row = mid_row
        selected_row = top_row if  target <= matrix[top_row][-1] else bottom_row 
        left , right = 0 ,column -1 
        while left<= right:
            mid_column = left + (right -left)//2 
            if target == matrix[selected_row][mid_column]:
                return True 
            if target <  matrix[selected_row][mid_column]: 
                right=  mid_column -1
            else :
                left = mid_column+1
        return False