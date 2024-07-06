#!/bin/bash

gcc main.c -o main

if [ $? -eq 0 ]; then
    echo "Build successful. Running the program..."
    ./main
else
    echo "Build failed. Please check the errors above."
fi
