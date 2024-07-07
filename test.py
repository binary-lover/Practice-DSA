# Given an incomplete Sudoku configuration in terms of a 9x9  2-D square matrix(mat[][]) the task to check if the current configuration is valid or not where a 0 represents an empty block.
# Note: Current valid configuration does not ensure validity of the final solved sudoku. 
# Refer to this : https://en.wikipedia.org/wiki/Sudoku

class Solution:
    def isValid(self, board):
        # code here
        for i in range(9):
            ans = bool()
            row = set()
            col = set()
            cube = set()
            for j in range(9):
                if board[i][j] != 0 and board[i][j] in row:
                    ans = 0
                    break

                row.add(board[i][j])

                if board[j][i] != 0 and board[j][i] in col:
                    ans = 0
                    return ans
                col.add(board[j][i])

                rowIndex = 3 * (i // 3)
                colIndex = 3 * (i % 3)
                if board[rowIndex + j // 3][colIndex + j % 3] != 0 and board[rowIndex + j // 3][colIndex + j % 3] in cube:
                    ans = 0
                    return ans
                cube.add(board[rowIndex + j // 3][colIndex + j % 3])

        return 1