#!/usr/bin/python3
"""Grid function definition.
   Module for island_perimeter function
"""


def island_perimeter(grid):
    """Calculates the perimeter of the island described in grid.

    Args:
        grid (list of list of int): The grid representing the island.

    Returns:
        int: The perimeter of the island.

    Constraints:
        - 0 represents a water zone.
        - 1 represents a land zone.
        - One cell is a square with side length 1.
        - Grid cells are connected horizontally/vertically (not diagonally).
        - Grid is rectangular, width and height don’t exceed 100.
        - Grid is completely surrounded by water, and there is one island
          (or nothing).
        - The island doesn’t have “lakes” (water inside that isn’t connected
          to the water around the island).
    """

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 4

                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2

    return perimeter
