#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
using namespace std;

class Date {
  private:
    unsigned days_;
    unsigned months_[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  public:
    Date();
    Date(string);
    friend ostream& operator<< (ostream& out, const Date& date);
    Date operator= (string);
    bool operator>= (string rhs) const ;
    bool operator<= (string rhs) const;
};

#endif