/*
 *      Author: MaksiKutrolli
 */

#ifndef DATE_H
#define DATE_H

class Date {
private:
    int day;
    int month;
    int year;
public:
	Date();
    Date(int day, int month, int year);
    int getDay();
    int getMonth();
    int getYear();
    void display();
};

#endif
