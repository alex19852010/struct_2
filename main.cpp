#include <iostream>

using namespace std;



struct date
{
    int year;
    int month;
    int day;

};

struct times
{
    int hour;
    int minute;
    int second;
    struct date my_date;
};

int main() {

date    my_date;
times   my_time;


my_date.year = 1985;
my_time.my_date.year =1995;

cout << my_date.year << " " << my_time.my_date.year;

    return 0;
}
