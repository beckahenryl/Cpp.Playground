/*
Write a function so that the main() code below can be replaced by the simpler code that calls function MphAndMinutesToMiles(). Original main(): 

int main() {
   double milesPerHour = 70.0;
   double minutesTraveled = 100.0;

   double hoursTraveled;
   double milesTraveled;

   hoursTraveled = minutesTraveled / 60.0;
   milesTraveled = hoursTraveled * milesPerHour;

   cout << "Miles: " << milesTraveled << endl;

   return 0;
}

*/

#include <iostream>
using namespace std;

double MphAndMinutesToMiles (double miles, double minutes){
   
   double hoursTraveled;
   double milesTraveled;
   
   hoursTraveled = minutes / 60.0;
   milesTraveled = hoursTraveled * miles;
   
   return milesTraveled;
   
   }

int main() {
   double milesPerHour = 70.0;
   double minutesTraveled = 100.0;

   cout << "Miles: " << MphAndMinutesToMiles(milesPerHour, minutesTraveled) << endl;

   return 0;
}