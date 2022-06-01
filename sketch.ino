#include <SD.h>
#include <RTClib.h>

RTC_DS1307 rtc;

File file;

//stores the names and corresponing birthdays.
String names[20];
String dates[20];

//stores the current date
String current_date = "";

void setup() {
  Serial.begin(9600);
  SD.begin();
  rtc.begin();

  file = SD.open("birthday.txt", FILE_READ);

  read_current_date();
  read_file();

  match_date();

}

void read_file() {
  
  /* write code to read the file and store names and dates into separate arrays.
    e.g. the first name from the file in the 0th index of the names array and 
    the corresponding birthday from the file in the 0th index of the dates array and so on.
  */


}

void read_current_date() {

  /* this fetces the current date and time using the RTC module */
  DateTime now = rtc.now();
  current_date = "";

  if (now.day() < 10) {
    current_date.concat("0");
  }
  current_date.concat(now.day());
  current_date.concat("-");
  if (now.month() < 10) {
    current_date.concat("0");
  }
  current_date.concat(now.month());

}

void match_date() {
  
  /* write code to match the current date and month with the birthdays provided in the dates array.
    if any of these match, print the birthday boy's/girl's name. 
    Else, print "no birthday today!" */


}

void loop() {

}