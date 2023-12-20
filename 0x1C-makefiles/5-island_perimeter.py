#!/usr/bin/python3
"""island_perimeter module"""

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in the grid.

    Parameters:
    - grid (List[List[int]]): 2D grid representing the island.

    Returns:
    - int: Perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Check if the current cell is on the boundary or adjacent to water
                if i == 0 or grid[i - 1][j] != 1:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] != 1:
                    perimeter += 1
                if j == cols - 1 or grid[i][j + 1] != 1:
                    perimeter += 1
                if i == rows - 1 or grid[i + 1][j] != 1:
                    perimeter += 1

    return perimeter
