#include <bits/stdc++.h>
#include "DateConverter.cpp"

using namespace std;

int main() {

    DateConverter dateConverter = DateConverter();

    try {

        dateConverter.setNumerical("1/31");
        cout << dateConverter.getAlphabetical() << endl;

        dateConverter.setNumerical("07/03");
        cout << dateConverter.getAlphabetical() << endl;

    } catch (MonthError& monthError) {

        cout << monthError.getMessage() << endl;

    } catch (DayError& dayError) {

        cout << dayError.getMessage() << endl;

    }

    return 0;
}
