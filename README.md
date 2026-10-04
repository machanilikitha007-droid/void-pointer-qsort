# Void Pointer with qsort()

## Author
M.Likitha

## Description
This program demonstrates the use of void pointers with
the qsort() library function.

The comparison function receives its arguments as
const void pointers and converts them to integer pointers
before comparing the values.

## Concepts Used
- Void pointer
- const void pointer
- qsort()
- Function pointer
- Type casting
- Array sorting

## How to Run

gcc void_pointer_qsort.c -o void_pointer_qsort

./void_pointer_qsort

## Sample Output

Sorted array: 9 12 23 45 78

gcc void_pointer_qsort.c -o void_pointer_qsort
./void_pointer_qsort

Sorted array: 9 12 23 45 78
