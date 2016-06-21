#!/bin/python3

import sys


n = int(input().strip())
grid = []
grid_i = 0
new_grid = []
for grid_i in range(n):
   grid_t = str(input().strip())
   grid.append(grid_t)
for i in range(0,n):
    for j in range(0,n):
        if(i>0 and j>0 and i!=(n-1) and j!=(n-1)):
            if (grid[i][j]>grid[i-1][j] and grid[i][j]>grid[i][j-1] and grid[i][j]>grid[i+1][j] and grid[i][j]>grid[i][j+1]):
                print("X",end="")
            else:
                print(grid[i][j],end="")
        elif(j == (n-1)):
            print(grid[i][j])
        else:
            print(grid[i][j],end="")
