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

  /* write code to fetch the current date and time using the RTC module. 
    Store it in the current_date variable in dd-mm format.
    You can use rtc.now() method to fetch the date. 
   */
  

}

void match_date() {
  
  /* write code to match the current date and month with the birthdays provided in the dates array.
    if any of these match, print the birthday boy's/girl's name. 
    Else, print "no birthday today!" */


}

void loop() {

}
