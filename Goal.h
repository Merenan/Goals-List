#ifndef GOAL_GUARD
#define GOAL_GUARD

#include "Date.h"
#include "std_lib_facilities.h"

class Goal{
    Date dropped;
    string name;
    int id;
    double requirement;
    string description;
    double progress;
    bool achieved;

public:
//------------------- Constructor ------------------------------------//
    Goal(int i, string n, Date dr, double r, string de){
        dropped = dr; name = n; id = i; requirement = r; description = de;

        // Default progress values
        progress = 0.0; achieved = false;
    }// Goal()

//------------------- Functionality ----------------------------------//
    void Display();
    void incrementProgress(double);
    void decrementProgress(double);

//------------------- Getters and Setters ----------------------------//
    string asString();
    string getDescription(){return description;}
    void setDropped(Date d){dropped = d;}
    void setname(string n){name = n;}
    void setId(int i){id = i;}
    void setRequirement(double r){requirement = r;}
    void setDescription(string d){description = d;}

};// Goal

#endif