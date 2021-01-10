#pragma once

typedef struct
{
	char* name;
	int age;
} Student;

typedef struct
{
	char* name;
	int numberOfStudents;
	Student* students;
} Course;

typedef struct
{
	char* name;
	int numberOfStudents;
	Student** students;
} BetterCourse;

void scanStudent(Student* student);

Course* allocateCourse(char* name, int numberOfStudents);

BetterCourse* allocateBetterCourse(char* name, int numberOfStudents);

void freeStudent(Student* student);

void freeBetterCourse(BetterCourse* course);