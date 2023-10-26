#!/usr/bin/python3
"""function that finds a island"""


def descover_island(grid):
    """descover island"""
    status = True
    if not any(grid[0][:]):
        status = False
    if not any(grid[:][0]):
        status = False
    if not any(grid[len(grid) - 1][:]):
        status = False
    if not any(grid[:][len(grid) - 1]):
        status = False
    if status:
        return False
    return status


def island_perimeter(grid):
    """find island in a river"""
    len_rows = len(grid)
    len_cols = len(grid[0])
    rows = 0
    cols = 0
    adder = 0
    grid_check = True
    for i in range(len_rows):
        for j in range(len_cols):
            if grid[i][j] == 1 and grid_check:
                rows = i
                cols = j
                while grid[rows][cols] == 1:
                    if rows <= len_rows and cols <= len_cols:
                        grid_check = False
                        adder += grid[rows][cols]
                        rows += 1
                cols = j
                rows = rows - 1
                while grid[rows][cols] == 1:
                    if rows <= len_rows and cols <= len_cols:
                        grid_check = False
                        adder += grid[rows][cols]
                        cols += 1
    return 2 * adder
