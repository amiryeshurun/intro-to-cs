#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "recursion.h"

int isDividedBy(int n1, int n2)
{
	if (n1 == 0)
		return 1;
	else if (n1 < 0)
		return 0;
	return isDividedBy(n1 - n2, n2);
}

int findLongestSubset(int* arr, int size)
{
	return findLongestSubsetHelper(arr, size, 0);
}

int findLongestSubsetHelper(int* arr, int size, int idx)
{
	if (idx == size - 1)
		return idx;
	int nextSubset = findLongestSubsetHelper(arr, size, idx + 1);
	if (findSubsetLength(arr, size, idx) >= findSubsetLength(arr, size, nextSubset))
		return idx;
	return nextSubset;
}

int findSubsetLength(int* arr, int size, int idx)
{
	if (idx == size - 1)
		return 1;
	if (arr[idx] < arr[idx + 1])
		return 1 + findSubsetLength(arr, size, idx + 1);
	else // arr[idx] >= arr[idx + 1]
		return 1;
}

int charExists(char* str, char ch)
{
	int size = strlen(str);
	int i;

	for (i = 0; i < size; i++)
		if (str[i] == ch)
			return 1;

	return 0;
}

char nextLetter(char* str, char ch)
{
	if (ch > 'Z')
		return 0;
	if (charExists(str, ch))
		return nextLetter(str, ch + 1);
	return ch;
}

void appendAbc(char* str)
{
	char ch = nextLetter(str, 'A');
	if (ch == 0)
		return;
	int size = strlen(str);
	str[size] = ch;
	str[size + 1] = '\0';
	appendAbc(str);
}