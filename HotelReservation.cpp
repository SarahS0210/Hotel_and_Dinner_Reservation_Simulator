#include <iostream>
#include <string>
#include <sstream>
#include "Date.h"
#include "Reservation.h"
#include "HotelReservation.h"
using namespace std;


HotelReservation::HotelReservation(const string &reservationName, int day, int month, const string &hotelName, double costPerNight, int nights) : Reservation(reservationName, day, month, 0){
  costPerNight_ = costPerNight;
  nights_ = nights;
  hotelName_ = hotelName;
}

double HotelReservation::calculate_cost() const{
  double cost;
  if (is_high_season()){
    cost = costPerNight_ * nights_;
    cost += (cost/2);
  }
  else{
    cost = costPerNight_ * nights_;
  }
  return cost;
}

string HotelReservation::to_string(){
  stringstream output;
  output << "Hotel ";
  output << Reservation::to_string() << calculate_cost(); 
  return output.str();
}