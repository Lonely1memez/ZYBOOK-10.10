#include <iostream>
#include <string>
using namespace std;
int DateParser(string month) {
   int monthInt = 0;
  
   if (month == "January")
       monthInt = 1;
   else if (month == "February")
       monthInt = 2;
   else if (month == "March")
       monthInt = 3;
   else if (month == "April")
       monthInt = 4;
   else if (month == "May")
       monthInt = 5;
   else if (month == "June")
       monthInt = 6;
   else if (month == "July")
       monthInt = 7;
   else if (month == "August")
       monthInt = 8;
   else if (month == "September")
       monthInt = 9;
   else if (month == "October")
       monthInt = 10;
   else if (month == "November")
       monthInt = 11;
   else if (month == "December")
       monthInt = 12;
   return monthInt;
}

int main () 
{
  
   // TODO: Read dates from input, parse the dates to find the one
   // in the correct format, and output in m/d/yyyy format
   while(1)
   {
    //declaring the required variables
   int monthInt,dayInt,yearInt;string input;
   //receive the input string frim the user
   getline(cin,input);
   //if the input is -1 then quit
   if(input=="-1")
     break;
   //else try to process the input
   try
   {
   //find and extract the month name and parse it to monthInt
   monthInt=DateParser(input.substr(0,input.find(' ')));
   //find and extract the day and parse it to dayInt
   dayInt=stoi(input.substr(input.find(' '),input.find(", ")));
   //find and extract the year and parse it to yearInt
   yearInt=stoi(input.substr(input.find(", ")+1,input.length()));
   //display the output
   cout<<monthInt<<"/"<<dayInt<<"/"<<yearInt<<endl;
   }
   //catch if any of the exceptions happens
   catch(exception& e){}
   }
}