#!/usr/bin/python3
""" Module island perimeter """


def island_perimeter(grid):
    """ Method island_perimeter that evaluate the perimeter on grid """
    count = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if (grid[i][j] == 1):
                """ UP """
                if (grid[i-1][j] == 0):
                    count += 1
                """ DOWN """
                if (grid[i+1][j] == 0):
                    count += 1
                """ RIGTH """
                if (grid[i][j+1] == 0):
                    count += 1
                """ LEFT """
                if (grid[i][j-1] == 0):
                    count += 1

    return count
