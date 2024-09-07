#ifndef HOTELRESERVATION_H
#define HOTELRESERVATION_H

#include <iostream>
#include <string>
#include "Date.h"
#include "Reservation.h"
using namespace std;

class HotelReservation : public Reservation {
private:
  string hotelName_;
  double costPerNight_;
  int nights_;

public:
  HotelReservation();
  HotelReservation(const string &reservationName, int day, int month, const string &hotelName, double costPerNight, int nights);
  double calculate_cost() const;
  string to_string();
};

#endif