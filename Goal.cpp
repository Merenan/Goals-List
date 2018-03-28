#include "Date.h"
#include "Goal.h"
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

string Goal::asString(){
    ostringstream os; 
    os << id << ":" << name << ":" << progress << ":" << requirement << ":" << dropped << ":" << achieved;
    return os.str();
}
    

void Goal::incrementProgress(double value){
    progress += value;
    if (progress >= requirement){
        achieved = true;
    }// if
}// incrementProgress()

void Goal::decrementProgress(double value){
    progress -= value;
    // Never put progress below 0
    if (progress < 0) progress = 0;
    // Update achieved, if necessary
    if (achieved == true && progress < requirement) achieved = false; 
}// decrementProgress()

void Goal::Display(){
    // WRITE THIS !!!!!!!!!
    cout<<name<<endl<<endl;
    cout<<"Drop Date:"<<dropped<<endl;
    cout<<"Id: "<<id<<endl;
    cout<<"Progress: "<<progress<<"/"<<requirement<<endl;
    cout<<"Description: \n"<<description<<endl;
}