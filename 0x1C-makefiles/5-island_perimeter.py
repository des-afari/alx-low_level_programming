#!/usr/bin/python3
def island_perimeter(grid):
    """
        Returns perimeter of grid
        Parameters:
            grid (list[list[int]]): a rectangular grid of 0's
            and 1's representing water and land zones

        Returns:
            int: the perimeter of the island
    """
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # count top and bottom edges
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                if i == rows-1 or grid[i+1][j] == 0:
                    perimeter += 1

                # count left and right edges
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                if j == cols-1 or grid[i][j+1] == 0:
                    perimeter += 1


return perimeter
