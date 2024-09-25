#!/usr/bin/python3
"""
5-island_perimeter.py module
"""

def island_perimeter(grid):
"""
Function to calculate the perimeter of the island in the grid.

Args:
grid (list): A list of list of integers representing the grid.

Returns:
int: The perimeter of the island.
"""
perimeter = 0
for i in range(len(grid)):
for j in range(len(grid[i])):
if grid[i][j] == 1:
# Check all 4 sides of the land cell
if i == 0 or grid[i - 1][j] == 0:  # Check above
perimeter += 1
if i == len(grid) - 1 or grid[i + 1][j] == 0:  # Check below
perimeter += 1
if j == 0 or grid[i][j - 1] == 0:  # Check left
perimeter += 1
if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:  # Check right
perimeter += 1
return perimeter
