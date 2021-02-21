#ifndef EXAM_H_
#define EXAM_H_
#include <stdio.h>
#define TEXT_SIZE 40
#define N 4

typedef struct
{
	int day;//1-31 
	int month;//1-12
	int year;//e.g. 2019
	int hour; //0-23
	int min;//0-59
}Date;

typedef struct
{
	char name[TEXT_SIZE];
	char phone[TEXT_SIZE];
	char emailAddress[TEXT_SIZE];
}Contact;

typedef struct
{
	char title[TEXT_SIZE];
	Date startDat;
	Date endDat;
	Contact** cont;
	int numOfContacts;
	char location[TEXT_SIZE];
	char* description;
}Event;

typedef struct
{
	Contact owner;
	Event** evt;
	int evtSize;
}Calendar;

int setEvent(Calendar** cal, int numCalendars, Event* ev);
Event* findAndSetWorkMeeting(Calendar** cal, int numCalendars, Date date, int duration, Event* ev);
Event* deleteContactFromEvent(Calendar** cal, int numCalendars, char* email, Event* ev);

int IsPerfect(int mat[][N]);
void create_substitutor(char *keyword, char *subst);
int areClose(long int n1, long int n2);
void fx1();
void fx2();


#endif