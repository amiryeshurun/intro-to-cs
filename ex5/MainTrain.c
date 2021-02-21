#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "exam.h"

int count1=0; // do not change!

void fx1(){
    count1++;
}

int main1()
{
	//1
	int mat1[N][N] ={{ 1, 2, 3, 4 },
			 { 2, 1, 4, 3},
			 { 3, 4, 2, 1 },
			 { 4, 3, 1, 2 }};
	int mat2[N][N] ={{ 1, 2, 3, 4 },
			 { 3, 4, 2, 1 },
			 { 2, 1, 4, 3},
			 { 4, 3, 1, 2 }};
	int mat3[N][N] ={{ 1, 2, 4, 4 },
			 { 2, 1, 4, 3},
			 { 3, 4, 2, 1 },
			 { 4, 3, 1, 2 }};
	int mat4[N][N] ={{ 1, 2, 3, 4 },
			 { 3, 4, 2, 4 },
			 { 2, 1, 4, 3},
			 { 4, 3, 1, 2 }};


	
	if(IsPerfect(mat1) != 1)
		printf("IsPerfect function is wrong for train1_1 (-5)\n");
	if(IsPerfect(mat2) != 1)
		printf("IsPerfect function is wrong for train1_2 (-5)\n");
	if(IsPerfect(mat3) != 0)
		printf("IsPerfect function is wrong for train1_3 (-5)\n");
	if(IsPerfect(mat4) != 0)
		printf("IsPerfect function is wrong for train1_4 (-5)\n");
	
	//2
	char subst[27];

	create_substitutor("STADIUM", subst);
	if (strcmp(subst, "STADIUMBCEFGHJKLNOPQRVWXYZ")!=0)
		printf("create_substitutorfunction is wrong for train2-1  (-5)\n");
	create_substitutor("ADIUM", subst);
	if (strcmp(subst, "ADIUMBCEFGHJKLNOPQRSTVWXYZ")!=0)
		printf("create_substitutorfunction is wrong for train2-2  (-5)\n");
	create_substitutor("MUIDATS", subst);
	if (strcmp(subst, "MUIDATSBCEFGHJKLNOPQRVWXYZ")!=0)
		printf("create_substitutorfunction is wrong for train2-3  (-5)\n");
	create_substitutor("AZ", subst);
	if (strcmp(subst, "AZBCDEFGHIJKLMNOPQRSTUVWXY")!=0)
		printf("create_substitutorfunction is wrong for train2-4  (-5)\n");

	//3
	areClose(12345678,  13456788);
    if(count1<2)
        printf(" areClose function is not recursive (-20)\n");
    else{
	if (areClose(12345678,  13456788)!= 1)
  		printf("areClose function is wrong for train3-1 (-5)\n");
	if (areClose(123,  1230)!= 0)
  		printf("areClose function is wrong for train3-2 (-5)\n");
	if (areClose(-12345678,  -13456788)!= 0)
  		printf("areClose function is wrong for train3-3 (-5)\n");
	if (areClose(84,  33)!= 0)
  		printf("areClose function is wrong for train3-4 (-5)\n");
        
    }
	
	//4
	printf("Question 4 will be checked manually, don't worry (-40)\n");
	printf("done");
    return 0;
}

#include "m7.h"

int main()
{
	int arr1[] = { 9,2,4,6,1,3 };

	printf("result: %d\n", MultEven(arr1, 6));
}