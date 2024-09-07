#include <iostream>
#include <string>
#include <sstream>
#include "Date.h"
#include "Reservation.h"
using namespace std;


Reservation::Reservation(const string& reservationName, int day, int month, float fee){
  stringstream month_day;
  month_day << month << "/" << day;
  reservationDate_ = Date(month_day.str());
  reservationName_ = reservationName;
  reservationFee_ = fee;
}

bool Reservation::is_high_season() const{
  string date1 = "12/20";
  string date2 = "01/06";
  if((reservationDate_ >= date1) || (reservationDate_ <= date2)){
    return true;
  }
  else{
    return false;
  }
}

double Reservation::calculate_cost() {
  if (is_high_season() == true){
    reservationFee_ = reservationFee_*2;
  }
    else{}
  return reservationFee_;
  }

string Reservation::to_string(){
    stringstream out;         
  out << "Reservation Details:\n" << reservationName_ << " Reservation on " << reservationDate_ << endl;
  if(is_high_season() == true){
    out << "The reservation is during high season and will cost $";
    if(calculate_cost() == 0){
    }  
  else {
    out << reservationFee_ << endl;
    }
  }
  else{
    if(calculate_cost() == 0){
      out << "The reservation will cost $";
    }
    else{
    out << "The reservation will cost $" << reservationFee_ << endl;
    }
  }
  return out.str();
}