# TODO
# Library from cs50 that let us use get_int so it is similar to C
from cs50 import get_int

# Loop that asks user for height till we get an integer between 1 and 8
while True:
    x = get_int("Height: ")
    if x > 0 and x < 9:
        break

# Prints bricks with height user prompted
for i in range(0, x, 1):
    for j in range(0, x+i+3, 1):
        if (j == x or j == x+1 or i+j<x-1):
            print(" ", end="")
        else:
            print("#", end="")

    print()

