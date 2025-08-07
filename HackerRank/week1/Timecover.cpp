#include<bits/stdc++.h>
using namespace std;

string timeConversion(string s) { 
    string p = s.substr(8, 2); 
    int hour = stoi(s.substr(0, 2)); 

    if (p == "AM") {
        if (hour == 12)
            hour = 0; 
    } else { // PM
        if (hour != 12)
            hour += 12; 
    }

    stringstream results;
    results << setw(2) << setfill('0') << hour << s.substr(2, 6); 

    return results.str();
    


}
