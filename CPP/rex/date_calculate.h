#include <iostream>
#include <string>
#include <vector>
/* if i had more time i would try to clean up the code a bit, have your functions separated into specific tasks
   and seperate them into different header files (so you can call any of them later programs with a quick #include)
*/
using namespace std; // I would recommend against doing this anymore due to the conversations we've had about it. 

string programName;

//Using parameter values, creates viable date
void dateCalculate(string stringDay, string stringYear)
{
  //Vectors to hold values for evaluating proper date
  /* I would rething the use of vector here, because this list is never changed, therefore it would be an ideal fixed list that the preprocessor can compile vs happening during runtime. 
  /* Vector is run during runtime.. more taxing.
  */
  vector<vector<int>> months {
    {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365},
    {31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366}
  };

  /* 
  /* Same thing regarding vector applied here
  */
  vector<string> days {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

  string stringMonth, numMonth, dayOfMonth;
  bool leapYear = false;

  //check if leapYear
  if((stoi(stringYear) % 400 == 0) || ((stoi(stringYear) % 4 == 0) && stoi(stringYear) % 100 != 0)) leapYear = true;

  //Check for out of bounds on year or day
  if(stoi(stringYear) < 1 || stoi(stringYear) > 9999){
    cerr << programName << " Year out of bounds (1 - 9999): " << stringYear << "\n";
    exit(0);
  }

  if(leapYear && (stoi(stringDay) < 1 || stoi(stringDay) > 366)){
    cerr << programName << " Day out of bounds (1 - 366): " << stringYear << "\n";
    exit(0);
  }else if(!leapYear && (stoi(stringDay) < 1 || stoi(stringDay) > 365)){
    cerr << programName << " Day out of bounds (1 - 365): " << stringYear << "\n";
    exit(0);
  }

  //Determine month and day of month
  if(stoi(stringDay) <= months[leapYear][0]){
    stringMonth ="Jan"; numMonth = "1"; dayOfMonth = stringDay;
  }else if(stoi(stringDay) <= months[leapYear][1]){
    stringMonth = "Feb"; numMonth = "2"; dayOfMonth = to_string(stoi(stringDay) - months[leapYear][0]);
  }else if(stoi(stringDay) <= months[leapYear][2]){
    stringMonth = "Mar"; numMonth = "3"; dayOfMonth = to_string(stoi(stringDay) - months[leapYear][1]);
  }else if(stoi(stringDay) <= months[leapYear][3]){
    stringMonth = "Apr"; numMonth = "4"; dayOfMonth = to_string(stoi(stringDay) - months[leapYear][2]);
  }else if(stoi(stringDay) <= months[leapYear][4]){
    stringMonth = "May"; numMonth = "5"; dayOfMonth = to_string(stoi(stringDay) - months[leapYear][3]);
  }else if(stoi(stringDay) <= months[leapYear][5]){
    stringMonth = "Jun"; numMonth = "6"; dayOfMonth = to_string(stoi(stringDay) - months[leapYear][4]);
  }else if(stoi(stringDay) <= months[leapYear][6]){
    stringMonth = "Jul"; numMonth = "7"; dayOfMonth = to_string(stoi(stringDay) - months[leapYear][5]);
  }else if(stoi(stringDay) <= months[leapYear][7]){
    stringMonth = "Aug"; numMonth = "8"; dayOfMonth = to_string(stoi(stringDay) - months[leapYear][6]);
  }else if(stoi(stringDay) <= months[leapYear][8]){
    stringMonth = "Sep"; numMonth = "9"; dayOfMonth = to_string(stoi(stringDay) - months[leapYear][7]);
  }else if(stoi(stringDay) <= months[leapYear][9]){
    stringMonth = "Oct"; numMonth = "10"; dayOfMonth = to_string(stoi(stringDay) - months[leapYear][8]);
  }else if(stoi(stringDay) <= months[leapYear][10]){
    stringMonth = "Nov"; numMonth = "11"; dayOfMonth = to_string(stoi(stringDay) - months[leapYear][9]);
  }else if(stoi(stringDay) <= months[leapYear][11]){
    stringMonth = "Dec"; numMonth = "12"; dayOfMonth = to_string(stoi(stringDay) - months[leapYear][10]);
  }else {
    numMonth = "-1"; dayOfMonth = "-1";
  }

  if(dayOfMonth.length() == 1) dayOfMonth = "0" + dayOfMonth;

  //Use mktime to evaluate day of the week
  tm timeData = {};
  timeData.tm_year = stoi(stringYear) - 1900;
  timeData.tm_mon = stoi(numMonth) - 1;
  timeData.tm_mday = stoi(dayOfMonth);
  mktime(&timeData);
  cout << days[timeData.tm_wday] << " " << dayOfMonth << " " << stringMonth << " " << stringYear << "\n";
}

//parse input for year/day values
void parseInput(string line)
{
    bool marker = false;
    bool endOfPadding = false;
    string stringYear, stringDay; 
    for(int i=0; i < int(line.length()); i++){
      if(line[i] != '.' && !isdigit(line[i])){
        cerr << programName << " Improper character in input: " << line[i] << "\n";
        exit(0);
      }
      if(!endOfPadding && line[i] != '0') endOfPadding = true;
      if(endOfPadding){
        if(line[i] == '.'){
          marker = true;
          endOfPadding = false;
        }
        else if(!(marker)) stringYear += line[i];
        else stringDay += line[i];
      }
    }

    while(stringYear.length() < 4) stringYear = "0" + stringYear;

    dateCalculate(stringDay, stringYear);
}