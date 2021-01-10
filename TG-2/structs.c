#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "structs.h"

void scanStudent(Student* student)
{
	char buffer[100];

	printf("Please enter the age of the student: ");
	scanf("%d", &(student->age));
	getchar();

	printf("Please enter the name of the student: ");
	gets_s(buffer, 99);
	student->name = (char*)malloc((strlen(buffer) + 1) * sizeof(char));
	if (student->name == NULL)
	{
		printf("Could not allocate memory for the name of the student\n");
		return;
	}
	strcpy(student->name, buffer);
}

Course* allocateCourse(char* name, int numberOfStudents)
{
	int i;
	Course* course = (Course*)malloc(sizeof(Course));
	if (course == NULL)
	{
		printf("Could not allocate space for course\n");
		return NULL;
	}
	course->name = (char*)malloc((strlen(name) + 1) * sizeof(char));
	if (course->name == NULL)
	{
		printf("Could not allocate memory for the name of the course\n");
		return;
	}
	strcpy(course->name, name);
	// course->name = strdup(name);
	course->numberOfStudents = numberOfStudents;
	course->students = (Student*)malloc(numberOfStudents * sizeof(Student));

	for (i = 0; i < numberOfStudents; i++)
	{
		printf("*********************\nStudent #%d\n*********************\n", i + 1);
		scanStudent(&(course->students[i]));
	}

	return course;
}

BetterCourse* allocateBetterCourse(char* name, int numberOfStudents)
{
	int i;
	BetterCourse* course = (BetterCourse*)malloc(sizeof(BetterCourse));
	if (course == NULL)
	{
		printf("Could not allocate space for a course\n");
		return NULL;
	}
	course->name = (char*)malloc((strlen(name) + 1) * sizeof(char));
	strcpy(course->name, name);
	course->numberOfStudents = numberOfStudents;
	course->students = (Student**)malloc(numberOfStudents * sizeof(Student*));
	for (i = 0; i < numberOfStudents; i++)
	{
		printf("*********************\nStudent #%d\n*********************\n", i + 1);
		course->students[i] = (Student*)malloc(sizeof(Student));
		scanStudent(course->students[i]);
	}
	return course;
}

void freeStudent(Student* student)
{
	free(student->name);
	free(student);
}

void freeBetterCourse(BetterCourse* course)
{
	int i;

	free(course->name);
	for (i = 0; i < course->numberOfStudents; i++)
		freeStudent(course->students[i]);
	free(course->students);
}