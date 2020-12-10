#pragma once

#define COLS 3
#define ROWS 3

void scanArray(int arr[], int length);

// 1 5 7 1 3 5 1 ----- 5 7 3 5
// 7
// 1

int removeArray(int arr[], int length, int number);

void scanMatrix(int mat[][COLS], int rows, int cols);

int trace(int mat[][COLS], int n);