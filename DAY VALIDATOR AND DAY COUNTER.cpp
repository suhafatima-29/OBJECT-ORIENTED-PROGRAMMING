#include <iostream>
using namespace std;

bool isLeapYear(int year) {
if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
return true;
else
return false;
}

bool isValidDate(int day, int month, int year) {
if (year < 1 || month < 1 || month > 12 || day < 1)
return false;

int daysInMonth;

if (month == 2) {
    daysInMonth = isLeapYear(year) ? 29 : 28;
} 
else if (month == 4 || month == 6 || month == 9 || month == 11) {
    daysInMonth = 30;
} 
else {
    daysInMonth = 31;
}

if (day > daysInMonth)
    return false;

return true;
}

int calculateDayOfWeek(int day, int month, int year) 
{
if (month == 1) 
{
month = 13;
year--;
} else if (month == 2) 
{
month = 14;
year--;
}

int q = day;
int m = month;
int k = year % 100;
int j = year / 100;

int h = (q + (13 * (m + 1)) / 5 + k + (k / 4) + (j / 4) + (5 * j)) % 7;
return h; 

}

int main() 
{
int day, month, year;
cout << "Enter date (DD MM YYYY): ";
cin >> day >> month >> year;

if (isValidDate(day, month, year)) 
{
    cout << "Valid Date!" << endl;

    int dayOfWeek = calculateDayOfWeek(day, month, year);

    switch (dayOfWeek) 
	{
        case 0: cout << "Day of the week: Saturday" << endl; break;
        case 1: cout << "Day of the week: Sunday" << endl; break;
        case 2: cout << "Day of the week: Monday" << endl; break;
        case 3: cout << "Day of the week: Tuesday" << endl; break;
        case 4: cout << "Day of the week: Wednesday" << endl; break;
        case 5: cout << "Day of the week: Thursday" << endl; break;
        case 6: cout << "Day of the week: Friday" << endl; break;
    }
} 
else 
{
    cout << "Invalid Date!" << endl;
}

return 0;

}

