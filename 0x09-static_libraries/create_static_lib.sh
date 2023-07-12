#!/bin/bash

# Step 1: Compile .c files into object files
gcc -c *.c

# Step 2: Create static library
ar -rcs liball.a *.o

# Step 3: Cleanup - Remove object files
rm *.o

echo "Static library liball.a created successfully!"

