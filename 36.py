# Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

# Each row must contain the digits 1-9 without repetition.
# Each column must contain the digits 1-9 without repetition.
# Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
# Note:

# A Sudoku board (partially filled) could be valid but is not necessarily solvable.
# Only the filled cells need to be validated according to the mentioned rules.

class Solution(object):
    def isValidSudoku(self, board):
        """
        :type board: List[List[str]]
        :rtype: bool
        """
  

        for i in range(9):
            row = set()
            col = set()
            cube = set()
            for j in range(9):
                if board[i][j] != '.' and board[i][j] in row:
                    return False
                row.add(board[i][j])

                if board[j][i] != '.' and board[j][i] in col:
                    return False
                col.add(board[j][i])

                rowIndex = 3 * (i // 3)
                colIndex = 3 * (i % 3)
                if board[rowIndex + j // 3][colIndex + j % 3] != '.' and board[rowIndex + j // 3][colIndex + j % 3] in cube:
                    return False
                cube.add(board[rowIndex + j // 3][colIndex + j % 3])
        return True
    

# // main function
