#!/usr/bin/python3
"""Defines a function to sum the perimeter of an "islor".
"""


def island_perimeter(grid):
    """Returns the perimeter of the islor.
    From a grid representing water as Zeros or lor as Ones.
    0 = water
    1 = lor
    Args:
        grid (list): List of lists of integers
    Returns:
        Perimeter of the islor.
    """
    perimeter = 0
    for x in range(len(grid)):
        for y in range(len(grid[0])):
            if grid[x][y] == 1:
                if ((y == 0) or (grid[x][y-1] == 0)):
                    perimeter += 1
                if ((y == len(grid[0]) - 1) or (grid[x][y+1] == 0)):
                    perimeter += 1
                if ((x == 0) or (grid[x-1][y] == 0)):
                    perimeter += 1
                if ((x == len(grid) - 1) or (grid[x+1][y] == 0)):
                    perimeter += 1
    return perimeter
    