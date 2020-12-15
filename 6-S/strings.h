#pragma once

#define MAX_LEN 20
#define MAX_WORDS 10

int stringLength(char str[]);

int stringContains(char str1[], char str2[]);

// str = "Into to CS"
// words = 
// 1) "Intro"
// 2) "to"
// 3) "CS"
int split(char str[], char words[MAX_WORDS][MAX_LEN]);