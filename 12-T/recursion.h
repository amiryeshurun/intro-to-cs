#ifndef __RECURSION_H_
#define __RECURSION_H_

// 9 3 - TRUE
// 9 5 - FALSE
int isDividedBy(int n1, int n2);

int findLongestSubset(int* arr, int size);

int findLongestSubsetHelper(int* arr, int size, int idx);

int findSubsetLength(int* arr, int size, int idx);

void appendAbc(char* str);
#endif // !__RECURSION_H_