#!/usr/bin/python3
"""modules"""


def discover_island(grid):
    """Discover island"""
    if any(grid[0]) or any(grid[-1]):
        return False
    for row in grid:
        if row[0] == 1 or row[-1] == 1:
            return False
    return True


def island_perimeter(grid):
    """Find perimeter of the island in a river"""
    len_rows = len(grid)
    len_cols = len(grid[0])
    perimeter = 0
    if not discover_island(grid):
        return perimeter

    for i in range(len_rows):
        for j in range(len_cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter
