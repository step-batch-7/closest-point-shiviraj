#! /bin/bash

echo "compling..."​​
rm -rf *.o
gcc -c *.c
gcc -o closestPoint *.o
rm -rf *.o
echo "done"
./closestPoint
rm -rf closestPoint