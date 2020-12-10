#pragma once

// compare(str1, str2) ----> 0, 1, -1
// compare("amir", "amir") ---> 0
// compare("amir", "air") ---> -1
// compare("air", "amir") ---> 1

int compareStrings(char str1[], char str2[]);

// "1356"
// 1356
int stringToInt(char str[]);