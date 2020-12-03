#pragma once

#define COL 3
#define ROW 3

void scanArray(int arr[], int length);

int countNumber(int arr[], int length, int number);

int filterPrimes(int arr[], int length, int result[]);

// 1 4 7 9 11 13 15 17 <----- arr

// 7 11 13 17 <---- result

void scanMatrix(int mat[][COL], int row, int col);

int sumRows(int mat[][COL], int row, int col);