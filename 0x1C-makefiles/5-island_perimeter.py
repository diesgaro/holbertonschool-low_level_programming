#!/usr/bin/python3
""" Module island perimeter """


def island_perimeter(grid):
    """ Method island_perimeter that evaluate the perimeter on grid """
    count = 0
    lenI = len(grid)

    for i in range(lenI):
        lenJ = len(grid[i])
        for j in range(lenJ):
            if (grid[i][j] == 1):
                """ UP """
                if (i == 0):
                    count += 1
                else:
                    if (grid[i-1][j] == 0):
                        count += 1
                """ DOWN """
                if (i+1 == lenI):
                    count += 1
                else:
                    if (grid[i+1][j] == 0):
                        count += 1

                """ LEFT """
                if (j == 0):
                    count += 1
                else:
                    if (grid[i][j-1] == 0):
                        count += 1
                """ RIGTH """
                if (j+1 == lenJ):
                    count += 1
                else:
                    if (grid[i][j+1] == 0):
                        count += 1

    return count
