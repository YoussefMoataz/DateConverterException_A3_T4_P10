//
// Created by Youssef Moataz on 12/17/2022.
//
#include <bits/stdc++.h>

using namespace std;

class DayError : public exception {

public:
    virtual const char *what() const throw() {
        return "Invalid Day";
    }

};