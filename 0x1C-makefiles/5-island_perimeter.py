#!/usr/bin/python3
"""defines an island perimeter."""

def island_perimeter(grid):
    """ that returns the perimeter of the island described in grid
    0 represents a water zone and 1 represents a land zone
    Args:
    list of list of integers
    Returns:
    the perimeter of the island described in grid
    """
    wid = len(grid[0])
    hght = len(grid)
    edg = 0
    siz = 0
    for  i in range(hght):
        for j in range(wid):
            if grid[i][j] == 1:
                siz += 1
                if (j >0 and grid[i][j - 1] == 1):
                    edg += 1
                    if (i > 0 and grid[i - 1][j] == 1):
                        edg += 1
    return siz * 4 - edg * 2
