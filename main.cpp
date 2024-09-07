#include <iostream>
#include "Date.h"
#include "Reservation.h"
#include "HotelReservation.h"
using namespace std;

int main() {
  int main_menu;
  int option;
  string month_and_days;
  string date1;
  string date2;
  string reservation_name;
  int day;
  int month;
  float fee;
  string hotel_name;
  int nights;
  Date d;
 
do{
  cout << "Would you like to\n1. Check a date\n2. make a reservation\n3. Make a hotel reservation\n4. Exit" << endl;
  cin >> main_menu;
  if(main_menu==1){
    cout << "select from the following:\n1. See how far a date is from January 1\n2. See if a date is after another date\n3. See if a date is before date\n4. See if two dates are the same\n5.Exit" << endl;
    cin >> option;
  switch(option){
    case 1:  
      cout << "enter a date";
      cin.ignore();
      getline(cin, month_and_days);
      d = month_and_days;
      cout << d;
      break;
    case 2:
      cout << "enter your first date (MM/DD)" << endl;
      cin.ignore();
      getline(cin, date1);
      cout << "enter your second date (MM/DD)" << endl;
      getline(cin, date2);
      if(date1 >= date2){
        cout << date1 << " is after " << date2 << endl;
        }
      else{
        cout << date1 << " is not after " << date2 << endl;
      }
      break;
    case 3:
      cout << "enter your first date (MM/DD)" << endl;
      cin.ignore();
      getline(cin, date1);
      cout << "enter your second date (MM/DD)" << endl;
      getline(cin, date2);
      if(date1 <= date2){
        cout << date1 << " is before " << date2 << endl;
        }
      else{
        cout << date1 << " is not before " << date2 << endl;
      }
      break;
    case 4:
      cout << "enter your first date (MM/DD)" << endl;
      cin.ignore();
      getline(cin, date1);
      cout << "enter your second date (MM/DD)" << endl;
      getline(cin, date2);
      if(date1 <= date2){
        cout << date1 << " is the same day as " << date2 << endl;
          }
      else{
          cout << date1 << " is not the same day as " << date2 << endl;
      break;
    case 5:
      break;
      } 
    }
  }
  else if(main_menu==2){
    cout << "Enter the name for your reservation" << endl;
    cin.ignore();
    getline(cin, reservation_name);
    cout << "Enter the month of your reservation" << endl;
    cin >> month;
    cout << "Enter the day of your reservation" << endl;
    cin >> day;
    cout << "Enter the reservation fee" << endl;
    cin >> fee;
    cout << (Reservation(reservation_name, day, month, fee).to_string());
    }
  else if(main_menu==3){
    cout << "enter the name for the reservation" << endl;
    cin.ignore();
    getline(cin, reservation_name);
    cout << "enter the month of the reservation" << endl;
    cin >> month;
    cout << "enter the day of the reservation" << endl;
    cin >> day;
    cout << "enter the name of the hotel" << endl;
    cin.ignore();
    getline(cin, hotel_name);
    cout << "enter the cost per night" << endl;
    cin >> fee;
    cout << "enter how many nights you intend to stay" << endl;
    cin >> nights;
    cout << HotelReservation(reservation_name, day, month, hotel_name, fee, nights).to_string();
    }
  else if(main_menu==4){
    break;
    }
  }  while(main_menu < 1 || main_menu > 4);
}