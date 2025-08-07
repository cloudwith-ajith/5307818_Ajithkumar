#include<bits/stdc++.h>
using namespace std;

string timeConversion(string s) { 
    string p = s.substr(8, 2); // AM or PM
    int hour = stoi(s.substr(0, 2)); // First 2 characters

    if (p == "AM") {
        if (hour == 12)
            hour = 0; // 12AM -> 00
    } else { // PM
        if (hour != 12)
            hour += 12; // Add 12 for PM hours (except 12PM)
    }

    stringstream results;
    results << setw(2) << setfill('0') << hour << s.substr(2, 6); // :MM:SS

    return results.str();


}