#pragma once

void scanArray(int* arr, int size);

// 1 22 32 45 89 1331
// 6
// 1 22 
//         ^
int findPoly(int* arr, int size, int* poly);

int findFours(int* arr, int size, int** addresses);