#!/bin/bash

# Create the bin directory if it doesn't exist
mkdir -p bin

# Compile all .cpp files in the src directory and create the executable in the bin directory
g++ -o ./bin/kmap ./src/*.cpp -Iinclude

# Check if the compilation was successful
if [ $? -eq 0 ]; then
  echo "Compilation successful. Executable is in ./bin/kmap"
else
  echo "Compilation failed."
fi

