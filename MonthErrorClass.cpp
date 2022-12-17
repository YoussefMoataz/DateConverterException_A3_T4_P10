//
// Created by Youssef Moataz on 12/17/2022.
//
#include <bits/stdc++.h>

using namespace std;

class MonthError : std::exception {
private:
    string message;

public:

    MonthError(string msg) {
        message = msg;
    }

    string getMessage() {
        return message;
    }

};