//
// Created by Youssef Moataz on 12/17/2022.
//
#include <bits/stdc++.h>
#include "MonthErrorClass.cpp"
#include "DayErrorClass.cpp"
#include "DataInit.cpp"


using namespace std;

class DateConverter {

private:
    string numerical;
    string alphabetical;


public:

    DateConverter() {
        dataInit();
    }

    void setNumerical(string input) {
        numerical = input;

        string month;
        string days;
        int monthInt;
        int daysInt;

        if (input.length() < 3) {
            throw MonthError("Month can Not be empty");
//            throw DayError("Day can Not be empty");
//            return;
        }

        int slashIndex = input.find('/');

        if (slashIndex != -1) {

            month = input.substr(0, slashIndex);
            days = input.substr(slashIndex + 1, input.length());

            if (month.length() < 1) {

                throw MonthError("Month can Not be empty");

            } else if (days.length() < 1) {

                throw DayError("Day can Not be empty");

            }

//            cout << month << " " << days << endl;

            monthInt = stoi(month);
            daysInt = stoi(days);

            cout << monthInt << " " << daysInt << endl;

            if (monthInt < 1 || monthInt > 12) {
                throw MonthError("Month unavailable");
            }

            if (daysInt < 1 || daysInt > monthDays[monthInt]) {
                throw DayError("Day unavailable");
            }

            alphabetical = monthNames[monthInt] + " " + to_string(daysInt);

        } else {

            throw MonthError("Unavailable");

        }

    }

    string getAlphabetical() {
        return alphabetical;
    }

};