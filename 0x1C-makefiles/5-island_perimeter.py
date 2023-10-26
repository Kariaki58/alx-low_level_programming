#!/usr/bin/python3
"""modules"""


def discover_island(grid):
    """Discover island"""
    adder = 0

    if i <= 0 or not grid[i - 1][j]:
        adder += 1
    if j <= 0 or not grid[i][j - 1]:
        adder += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        adder += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        adder += 1
    return adder


def island_perimeter(grid):
    """Find perimeter of the island in a river"""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perimeter += discover_island(grid, i, j)
    return perimeter
