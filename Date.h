#ifndef DATE_GUARD
#define DATE_GUARD

#include <iostream>

struct Date{
    int year,month,day;
    
    Date(){// Default constructor
        year=0; month=0; day=0;
    }

    Date(int y, int mo, int d){// Setting constructor
        year = y; month = mo; day = d;
    }

    Date& operator=(const Date& d){
        year = d.year; month = d.month; day = d.day;
        return *this;
    }

    friend std::ostream& operator<<(std::ostream& os, const Date& d){
    os << d.month << "/" << d.day << "/" << d.year;
    return os;
    }

    //------------------- Comparison Operations ------------------------//

};

#endif
