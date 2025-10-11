# Sortingalgs
## Introduction
The goal of this program is to test and learn sorting algorithms, since it only sorts simple integers from text files.

## Algorithms
| Algorithm | Best Case¹| Average Case | Worst Case | Time Taken² |
|-----------|-----------|--------------|------------|-------------|
| bogo      | n         | n*n!         | ∞          | -           |
| bubble    | n         | n^2          | n^2        | 13.382278   |
| cocktail  | n         | n^2          | n^2        | 10.523375   |
| selection | n^2       | n^2          | n^2        | 11.632925   |
| insertion | n         | n^2          | n^2        |  1.041146   |
| shell     | n*log(n)  | n^1.25       | n^1.5      |  0.008634   |
| merge     | n*log(n)  | n*log(n)     | n*log(n)   |  0.011365   |
| heap      | n*log(n)  | n*log(n)     | n*log(n)   |  0.009654   |
| quick     | n*log(n)  | n*log(n)     | n^2        |  0.006848   |
| intro     | n         | n*log(n)     | n*log(n)   |  0.005506   |
| tim       | n         | n*log(n)     | n*log(n)   |  0.006378   |
| counting³ | n + r     | n + r        | n + r      |  0.001140   |
---
1. complexity in big O notation
2. test with 100,000 random numbers, in seconds
3. r = number range
---
