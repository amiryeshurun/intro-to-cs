#pragma once

typedef struct
{
	int id;
	int length;
	char* name;
} Movie;

typedef struct
{
	char* address;
	int numberOfMovies;
	Movie* movies;
} Cinema;

typedef struct
{
	int numberOfCinemas;
	Cinema* cinemas;
} CinemaCity;

void scanMovie(Movie* movie);

void scanCinema(Cinema* cinema);

void scanCinemaCity(CinemaCity* cinemaCity);

void freeMovie(Movie* movie);

void freeCinema(Cinema* cinema);

void freeCinemaCity(CinemaCity* cinemaCity);

// ======================

typedef struct
{
	int id;
	int age;
} Student;

Student** scanStudents(int size);