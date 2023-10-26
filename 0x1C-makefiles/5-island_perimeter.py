#!/usr/bin/python3

"""This module defines a function that finds and returns
the perimeter of an island represented by a 2D ARRAY
"""


def island_perimeter(grid):
    """island_perimeter: returns the island perimeter

    Args:
        grid (List[List[int]]):
            list of list of integers (2D ARRAY)

    Returns:
        (int): the perimeter of the island described in grid

    """
    rows: int = len(grid)
    columns: int = len(grid[0])
    perimeter: int = 0

    for ro in range(rows):
        for co in range(columns):
            if grid[ro][co]:
                perimeter += 4

                if ro > 0 and grid[ro - 1][co] == 1:
                    perimeter -= 2

                if co > 0 and grid[ro][co - 1] == 1:
                    perimeter -= 2
    return perimeter
