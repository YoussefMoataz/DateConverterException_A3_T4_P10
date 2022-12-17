//
// Created by Youssef Moataz on 12/17/2022.
//
#include <bits/stdc++.h>

using namespace std;

inline map<int, int> monthDays;
inline map<int, string> monthNames;

inline void dataInit() {
    monthDays[1] = 31;
    monthDays[2] = 29;
    monthDays[3] = 31;
    monthDays[4] = 30;
    monthDays[5] = 31;
    monthDays[6] = 30;
    monthDays[7] = 31;
    monthDays[8] = 31;
    monthDays[9] = 30;
    monthDays[10] = 31;
    monthDays[11] = 30;
    monthDays[12] = 31;

    monthNames[1] = "January";
    monthNames[2] = "February";
    monthNames[3] = "March";
    monthNames[4] = "April";
    monthNames[5] = "May";
    monthNames[6] = "June";
    monthNames[7] = "July";
    monthNames[8] = "August";
    monthNames[9] = "September";
    monthNames[10] = "October";
    monthNames[11] = "November";
    monthNames[12] = "December";
}