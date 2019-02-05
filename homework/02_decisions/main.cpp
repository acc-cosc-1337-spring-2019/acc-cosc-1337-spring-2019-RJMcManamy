#include<iostream>
//write include statements
#include "decisions.h"
#include <string>
/*
In main write code to capture a letter_grade and credit_hours from the keyboard:


Grade   Credit Hours	grade_points   credit_points
A          3            4              12
B          3            3               9
C          3            2               6
-----------------------------------------------
           9                           27
After each user input convert the Grade to grade points by calling the get_grade_points function, and
keep a running total for both credit_points and credit_hours.

Call the calculate_gpa function with its arguments.
The GPA should calculate to 3.0, make sure to display it before program exits.

Display:
GPA 3.0

*/
using std::cout;
using std::cin;

int main() 
{
	double credit_point_total = 0;
	int credit_hours_total = 0;
	int credit_hours;
	string letter_grade;
	int grade_points;

	cout << "Please enter a letter grade: " ;
	cin >> letter_grade;
	grade_points = get_grade_points(letter_grade);

	cout << "\n" << "Please enter the credit hours: ";
	cin >> credit_hours;
	credit_hours_total += credit_hours;

	credit_point_total += calculate_total_credit_points(grade_points, credit_hours);

	cout << "\n" << "Please enter a letter grade: " ;
	cin >> letter_grade;
	grade_points = get_grade_points(letter_grade);

	cout << "\n" << "Please enter the credit hours: ";
	cin >> credit_hours;
	credit_hours_total += credit_hours;

	credit_point_total += calculate_total_credit_points(grade_points, credit_hours);

	cout << "\n" << "Please enter a letter grade: " ;
	cin >> letter_grade;
	grade_points = get_grade_points(letter_grade);

	cout << "\n" << "Please enter the credit hours: ";
	cin >> credit_hours;
	credit_hours_total += credit_hours;

	credit_point_total += calculate_total_credit_points(grade_points, credit_hours);

	double gpa_to_display = calculate_gpa(credit_hours_total, credit_point_total);

	cout << "\n\n" << "GPA: " << gpa_to_display;

	return 0;
}