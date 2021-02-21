#include "exam.h"
#include <string.h>
#include <stdlib.h>

// 1 = d1 is before d2
// 0 = equals
// -1 = d2 is before d1
int compareDates(Date* d1, Date* d2)
{
	int day;//1-31 
	int month;//1-12
	int year;//e.g. 2019
	int hour; //0-23
	int min;//0-59

	if (d1->year > d2->year)
		return -1;
	else if (d1->year < d2->year)
		return 1;

	if (d1->month > d2->month)
		return -1;
	else if (d1->month < d2->month)
		return 1;

	if (d1->day > d2->day)
		return -1;
	else if (d1->day < d2->day)
		return 1;

	if (d1->hour > d2->hour)
		return -1;
	else if (d1->hour < d2->hour)
		return 1;

	if (d1->min > d2->min)
		return -1;
	else if (d1->min < d2->min)
		return 1;

	return 0;
}

int setEvent(Calendar** cal, int numCalendars, Event* ev)
{
	int i, j;
	Event* e;
	Event** tmp;

	for (i = 0; i < numCalendars; i++)
	{
		for (j = 0; j < cal[i]->evtSize; j++)
		{
			// 1 = d1 is before d2
			// 0 = equals
			// -1 = d2 is before d1
			e = cal[i]->evt[j];
			int val = compareDates(&e->startDat, &ev->startDat);
			int val2 = compareDates(&ev->endDat, &e->endDat);

			// הפגישה מתחילה כשפגישה אחרת כבר מתרחשת
			if (val == 1 && compareDates(&ev->startDat, &e->endDat) == 1)
				return 0;
			// הפגישה נקבעה בזמן שמתחילה בדיוק פגישה אחרת
			else if (val == 0)
				return 0;
			// הפגישה מסתיימת כאשר פגישה אחרת מתרחשת
			else if (compareDates(&e->startDat, &ev->endDat) == 1 && (val2 == 1 || val2 == 0))
				return 0;
		}
	}

	for (i = 0; i < numCalendars; i++)
	{
		tmp = (Event**)realloc(cal[i]->evt, (cal[i]->evtSize + 1) * sizeof(Event*));
		if (!tmp)
		{
			// fail...
			return -1;
		}
		cal[i]->evt = tmp;
		cal[i]->evt[cal[i]->evtSize++] = ev;
	}

	return 1;
}

// 1 2 6 7

Event* findAndSetWorkMeeting(Calendar** cal, int numCalendars, Date date, int duration, Event* ev)
{
	int start;

	ev->startDat = date;
	ev->endDat = date;

	if (date.hour + duration > 17)
		return NULL;

	// 17 = 5:00pm
	for (start = date.hour; start <= 17 - duration; start++)
	{
		ev->startDat.hour = start;
		ev->endDat.hour = start + duration;
		if (setEvent(cal, numCalendars, ev) == 1)
			return ev;
	}

	return NULL;
}

Event* deleteContactFromEvent(Calendar** cal, int numCalendars, char* email, Event* ev)
{
	return NULL;
}

