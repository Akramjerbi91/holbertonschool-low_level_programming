#!/usr/bin/python3
"""
returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid
        parameter: grid
        output: perimeter
    """
    n = len(grid)
    m = len(grid[0])
    perimeter = 0
    i = 0
    while (i < n):
        j = 0
        while (j < m):
            if (grid[i][j] == 1):
                perimeter += 4
                if (i > 0 and grid[i - 1][j] == 1):
                    perimeter -= 2
                if (j > 0 and grid[i][j - 1] == 1):
                    perimeter -= 2
            j += 1
        i += 1
    return perimeter


if __name__ == "__main__":
    island_perimeter.main([])
