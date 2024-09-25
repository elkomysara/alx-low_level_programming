#!/usr/bin/python3
"""
Function to calculate the perimeter of an island in a grid.
"""

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in grid.

    Args:
        grid (List[List[int]]): A list of lists of integers representing the grid.

    Returns:
        int: The perimeter of the island.

    Example:
        grid = [
            [0, 0, 0, 0, 0, 0],
            [0, 1, 0, 0, 0, 0],
            [0, 1, 0, 0, 0, 0],
            [0, 1, 1, 1, 0, 0],
            [0, 0, 0, 0, 0, 0]
        ]
        island_perimeter(grid)  # Output: 12
    """
    perimeter = 0

    # Iterate over the grid
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                # Check each side of the cell and add to perimeter if it's a border or water
                if i == 0 or grid[i - 1][j] == 0:  # Top
                    perimeter += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:  # Bottom
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:  # Left
                    perimeter += 1
                if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:  # Right
                    perimeter += 1

    return perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
