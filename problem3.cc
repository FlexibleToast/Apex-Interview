
#include <iostream>
#include <iomanip>
#include <string>
#include <ios>

using namespace std;

string timeConversion(string s);

int main() {
	cout << timeConversion("06:05:45AM") << endl;
  return 0;
}

string timeConversion(string s){
	string tempStr = s.substr(0,2);
	if(s[8] == 'P'){	// Time is given in PM
		if(tempStr != "12"){	// 12 PM is still 12, no need to convert
			int tempInt = stoi(tempStr);
			tempInt += 12;
			s.replace(0, 2, to_string(tempInt));
		}
	} else if (tempStr == "12"){	// Time is AM, only convert if 12 to 00
		s.replace(0, 2, "00");
	}
	s.resize(8);	// Remove the AM/PM from the string
	return s;
}
