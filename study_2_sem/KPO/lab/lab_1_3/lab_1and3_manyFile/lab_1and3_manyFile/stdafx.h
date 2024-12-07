#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int checkIfCorrect(int day, int month, int year, int leap_flag, int data, int Months[12]);
int getBirthdayNumber(int day, int month, int year, int leap_flag);
int getNumber(int day, int month, int year, int leap_flag);
string nameMonth(int month);
int countTheEventDate(int evetn_day, int Months[12], int year);