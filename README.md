# Sortingalgs
## Introduction
The goal of this program is to test and learn sorting algorithms, since it only sorts simple integers from text files.
There are many algorithms missing, but I plan to add more in the future.

## Algorithms
| Algorithm | Best Case¹| Average Case | Worst Case | Memory | Time Taken²| Ideal Amount⁴|
|-----------|-----------|--------------|------------|--------|------------|--------------|
| bogo      | n         | n*n!         | ∞          | 1      | -          |           13 |
| bubble    | n         | n^2          | n^2        | 1      | 13.382278  |      100,000 |
| cocktail  | n         | n^2          | n^2        | 1      | 10.523375  |      150,000 |
| selection | n^2       | n^2          | n^2        | 1      | 11.632925  |      100,000 |
| insertion | n         | n^2          | n^2        | 1      |  1.041146  |      300,000 |
| shell     | n*log(n)  | n^1.25       | n^1.5      | 1      |  0.008634  |   10,000,000 |
| merge     | n*log(n)  | n*log(n)     | n*log(n)   | n      |  0.011365  |    5,000,000 |
| heap      | n*log(n)  | n*log(n)     | n*log(n)   | 1      |  0.009654  |   10,000,000 |
| quick     | n*log(n)  | n*log(n)     | n^2        | log(n) |  0.006848  |   15,000,000 |
| intro     | n         | n*log(n)     | n*log(n)   | log(n) |  0.005506  |   20,000,000 |
| tim       | n         | n*log(n)     | n*log(n)   | n      |  0.006378  |   15,000,000 |
| counting³ | n + r     | n + r        | n + r      | n + r  |  0.001140  |   50,000,000 |
---
1. complexity in big O notation
2. test with 100,000 random numbers, in seconds
3. r = number range
4. recommended maximum amount of numbers, to avoid taking forever.
---

## How the program works:
It is a command line program that recieves the following arguments:
* Algorithm: the algorithm to be used for the sorting, you can see them in the table above.
* Amount: amount of numbers.
* Source File: the file that will have the numbers, plain text, numbers separated by newline.
* Output File: the file that will recieve the sorted array.

Careful with the amount of numbers, check the table above to see recommended maximum size.
