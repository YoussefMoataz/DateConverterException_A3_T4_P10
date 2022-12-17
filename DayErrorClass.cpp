//
// Created by Youssef Moataz on 12/17/2022.
//
#include <bits/stdc++.h>

using namespace std;

class DayError : std::exception {
private:
    string message;

public:

    DayError(string msg) {
        message = msg;
    }

    string getMessage() {
        return message;
    }

};