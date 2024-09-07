#include "Date.h"
#include <sstream>
using namespace std;

Date::Date() : days_(0) { 
}

Date::Date(string month_day) : days_(0){
  int position;
  int month;
  int day;
  position = month_day.find("/");
  month = stoi(month_day.substr(0, position));
  day = stoi(month_day.substr(position+1));
  for (int i=0; i<month-1; i++){
    days_ = days_ + months_[i];
  }
  days_ = (days_ -1) + day;
}

ostream& operator<< (ostream& out, const Date& date){
  int month;
  int days = date.days_ + 1;
  for (int i=0; i<12; i++){
    if(days <= date.months_[i]){
      month = i+1;
      break;
    }
    days -= date.months_[i];
  }
  out << "The date " << month << "/" << days << " is " << date.days_ << " day(s) from January 1";
  return out;
}

Date Date::operator= (string month_day){
  int position;
  int month;
  int day;
  position = month_day.find("/");
  month = stoi(month_day.substr(0, position));
  day = stoi(month_day.substr(position+1));
  for (int i=0; i<month-1; i++){
    days_ = days_ + months_[i];
  }
  days_ = (days_ -1) + day;
	return *this;
}


bool Date::operator>= (string rhs) const {
  Date right(rhs);
  if (this->days_ >= right.days_)
    return true;
  else{
    return false;
  }
}

bool Date::operator<= (string rhs) const{
    Date right(rhs);
    if (this->days_ <= right.days_)
      return true;
    else{
      return false;
  }
}
