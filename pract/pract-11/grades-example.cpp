#include <iostream>
#include <fstream>

const int MAX_NAME_LEN = 200;
const int MAX_STUDENTS = 50;
const char *GRADES_FILE = "grades.txt";
const char SEP = '@';

// assuming file format:
// Aleksandar Mandev@4.5
// Georgi Petrov@6.0
void loadGrades(char students[][MAX_NAME_LEN], double *grades, int &size)
{
	if (!grades)
		return;
	std::ifstream file(GRADES_FILE);
	if (!file.is_open())
	{
		return;
	}
	size = 0;
	for (int i = 0; i < MAX_STUDENTS; i++)
	{
		file.getline(students[i], MAX_NAME_LEN, SEP);
		if (file.eof() || students[i][0] == '\0') // empty line or reached end of file
			break;
		file >> grades[i];
		file.ignore();
		size++;
	}
	file.close();
}

double calculateAverage(double *grades, int size)
{
	if (!grades || size <= 0)
		return 0.0;
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += grades[i];
	}
	return sum / size;
}

double findHighest(double *grades, int size)
{
	if (!grades || size <= 0)
		return 0;
	double highest = grades[0];
	for (int i = 1; i < size; i++)
	{
		if (grades[i] > highest)
		{
			highest = grades[i];
		}
	}
	return highest;
}

void saveGrades(char students[][MAX_NAME_LEN], double *grades, int size)
{
	if (!grades || size == 0)
		return;

	std::ofstream file(GRADES_FILE);
	if (!file.is_open())
	{
		return;
	}
	for (int i = 0; i < size; i++)
	{
		file << students[i] << SEP << grades[i] << std::endl;
	}
	file.close();
}

int main()
{
	char students[MAX_STUDENTS][MAX_NAME_LEN];
	double grades[MAX_STUDENTS];
	int size = 0;
	loadGrades(students, grades, size);
	std::cout << "Loaded " << size << " students." << std::endl;
	if (size > 0)
	{
		std::cout << "Average: " << calculateAverage(grades, size) << std::endl;
		std::cout << "Highest: " << findHighest(grades, size) << std::endl;
	}
	return 0;
}