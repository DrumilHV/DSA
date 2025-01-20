#!/bin/bash

# Check if a program name was provided as an argument
if [ -z "$1" ]; then
    echo "Usage: $0 <source_file.cpp>"
    exit 1
fi

# The program file passed as the first argument
SOURCE_FILE="$1"

# Compile the C++ program (this will output an executable named 'a.out' by default)
g++ -std=c++17 -o a.out "$SOURCE_FILE"

# Check if the compilation was successful
if [ $? -ne 0 ]; then
    echo "Compilation failed."
    exit 1
fi

# Check if an input file is provided; if not, assume 'input.txt' is used by default
INPUT_FILE="${2:-input.txt}"

# Run the program and capture the output
./a.out < "$INPUT_FILE" | while read -r line
do
    # Increment test case number for each line of output
    test_case=$((test_case + 1))
    
    # Print test case number and corresponding output
    echo "Test case $test_case: $line"
done

