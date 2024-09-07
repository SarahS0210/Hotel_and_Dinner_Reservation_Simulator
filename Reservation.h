#ifndef RESERVATION_H
#define RESERVATION_H

#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

class Reservation : public Date{ 
private:
  string reservationName_;
  Date reservationDate_;
  float reservationFee_;
protected:
  bool is_high_season() const;
public:
  Reservation(const string &reservationName, int day, int month, float fee = 0);
  double calculate_cost();
  string to_string();
};

#endif